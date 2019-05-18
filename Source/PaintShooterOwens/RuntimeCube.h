// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RuntimeMeshComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RuntimeCube.generated.h"

UCLASS()
class PAINTSHOOTEROWENS_API ARuntimeCube : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARuntimeCube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	virtual void PostActorCreated() override;
	virtual void PostLoad() override;
	virtual void GenerateBoxMesh();
	virtual void CreateBoxMesh(FVector BoxRadius, TArray <FVector> & Vertices, TArray <int32> & Triangles, TArray <FVector> & Normals, TArray <FVector2D> & UVs, TArray <FRuntimeMeshTangent> & Tangents, TArray <FColor> & Colors);

private:
	UPROPERTY(VisibleAnywhere)
		URuntimeMeshComponent * mesh;


	
};
