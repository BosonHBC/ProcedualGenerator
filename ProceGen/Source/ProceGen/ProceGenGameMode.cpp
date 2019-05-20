// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ProceGenGameMode.h"
#include "ProceGenPlayerController.h"
#include "ProceGenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProceGenGameMode::AProceGenGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProceGenPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}