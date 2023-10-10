// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlyAwayGameMode.h"
#include "FlyAwayCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFlyAwayGameMode::AFlyAwayGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
