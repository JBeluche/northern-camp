// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "NorthernCampGameMode.h"
#include "NorthernCampPlayerController.h"
#include "NorthernCampCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANorthernCampGameMode::ANorthernCampGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ANorthernCampPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}