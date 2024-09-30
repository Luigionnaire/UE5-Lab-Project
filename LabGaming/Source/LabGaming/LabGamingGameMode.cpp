// Copyright Epic Games, Inc. All Rights Reserved.

#include "LabGamingGameMode.h"
#include "LabGamingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALabGamingGameMode::ALabGamingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
