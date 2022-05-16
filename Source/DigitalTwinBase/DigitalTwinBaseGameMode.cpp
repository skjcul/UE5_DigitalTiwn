// Copyright Epic Games, Inc. All Rights Reserved.

#include "DigitalTwinBaseGameMode.h"
#include "DigitalTwinBaseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADigitalTwinBaseGameMode::ADigitalTwinBaseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
