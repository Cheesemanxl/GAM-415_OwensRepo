// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PaintShooterOwensCharacter.h"
#include "PaintShooterOwensProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// APaintShooterOwensCharacter

APaintShooterOwensCharacter::APaintShooterOwensCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	//FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->Hand = EControllerHand::Right;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;

	EndColorBuildup = 0;
	EndColorBuildupDirection = 1;
	PixelShaderTopLeftColor = FColor::Green;
	ComputeShaderSimulationSpeed = 1.0;
	ComputeShaderBlend = 0.5f;
	ComputeShaderBlendScalar = 0;
	TotalElapsedTime = 0;

}

void APaintShooterOwensCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}

	PixelShading = new FPixelShaderUsageExample(PixelShaderTopLeftColor, GetWorld()->Scene->GetFeatureLevel());
	ComputeShading = new FComputeShaderUsageExample(ComputeShaderSimulationSpeed, 1024, 1024, GetWorld()->Scene->GetFeatureLevel());

}

//////////////////////////////////////////////////////////////////////////
// Input

void APaintShooterOwensCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	//ShaderPluginDemo Specific input mappings  
	InputComponent->BindAction("SavePixelShaderOutput", IE_Pressed, this, &APaintShooterOwensCharacter::SavePixelShaderOutput);
	InputComponent->BindAction("SaveComputeShaderOutput", IE_Pressed, this, &APaintShooterOwensCharacter::SaveComputeShaderOutput);
	InputComponent->BindAxis("ComputeShaderBlend", this, &APaintShooterOwensCharacter::ModifyComputeShaderBlend);


	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APaintShooterOwensCharacter::OnFire);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &APaintShooterOwensCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &APaintShooterOwensCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APaintShooterOwensCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &APaintShooterOwensCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &APaintShooterOwensCharacter::LookUpAtRate);
}

void APaintShooterOwensCharacter::OnFire()
{
	// try and fire a projectile
	FHitResult HitResult;
	FVector StartLocation = FirstPersonCameraComponent->GetComponentLocation();
	FRotator Direction = FirstPersonCameraComponent->GetComponentRotation();
	FVector EndLocation = StartLocation + Direction.Vector() * 10000;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	if (GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility, QueryParams)) {
		TArray <UStaticMeshComponent*> StaticMeshComponents = TArray <UStaticMeshComponent*>();
		AActor* HitActor = HitResult.GetActor();
		if (NULL != HitActor) {
			HitActor->GetComponents <UStaticMeshComponent>(StaticMeshComponents);
			for (int32 i = 0; i < StaticMeshComponents.Num(); i++) {
				UStaticMeshComponent * CurrentStaticMeshPtr = StaticMeshComponents[i];
				CurrentStaticMeshPtr->SetMaterial(0, MaterialToApplyToClickedObject);
				UMaterialInstanceDynamic* MID = CurrentStaticMeshPtr->CreateAndSetMaterialInstanceDynamic(0);
				UTexture* CastedRenderTarget = Cast <UTexture>(RenderTarget);
				MID->SetTextureParameterValue("InputTexture", CastedRenderTarget);
			}
		}
	}


	// try and play the sound if specified
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != NULL)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != NULL)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

void APaintShooterOwensCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void APaintShooterOwensCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void APaintShooterOwensCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void APaintShooterOwensCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void APaintShooterOwensCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void APaintShooterOwensCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void APaintShooterOwensCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void APaintShooterOwensCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool APaintShooterOwensCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &APaintShooterOwensCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &APaintShooterOwensCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &APaintShooterOwensCharacter::TouchUpdate);
		return true;
	}
	
	return false;
}

void APaintShooterOwensCharacter::BeginDestroy() {
	Super::BeginDestroy();
	if (PixelShading) {
		delete PixelShading;
	}
	if (ComputeShading) {
		delete ComputeShading;
	}
}

//Saving functions
void APaintShooterOwensCharacter::SavePixelShaderOutput() {
	PixelShading->Save();
}
void APaintShooterOwensCharacter::SaveComputeShaderOutput() {
	ComputeShading->Save();
}
void APaintShooterOwensCharacter::ModifyComputeShaderBlend(float NewScalar) {
	ComputeShaderBlendScalar = NewScalar;
}
void APaintShooterOwensCharacter::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);
	TotalElapsedTime += DeltaSeconds;
	if (PixelShading) {
		EndColorBuildup = FMath::Clamp(EndColorBuildup + DeltaSeconds * EndColorBuildupDirection, 0.0f, 1.0f);
		if (EndColorBuildup >= 1.0 || EndColorBuildup <= 0) {
			EndColorBuildupDirection *= -1;
		}
		FTexture2DRHIRef InputTexture = NULL;
		if (ComputeShading) {
			ComputeShading->ExecuteComputeShader(TotalElapsedTime);
			InputTexture = ComputeShading->GetTexture(); //This is the output texture from the compute shader that we will pass to the pixel shader. 
		}
		ComputeShaderBlend = FMath::Clamp(ComputeShaderBlend + ComputeShaderBlendScalar * DeltaSeconds, 0.0f, 1.0f);
		PixelShading->ExecutePixelShader(RenderTarget, InputTexture, FColor(EndColorBuildup * 255, 0, 0, 255), ComputeShaderBlend);
	}
}
