// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PaintShooterOwensGameMode.h"
#include "PaintShooterOwensHUD.h"
#include "PaintShooterOwensCharacter.h"
#include "UObject/ConstructorHelpers.h"

APaintShooterOwensGameMode::APaintShooterOwensGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APaintShooterOwensHUD::StaticClass();
}
