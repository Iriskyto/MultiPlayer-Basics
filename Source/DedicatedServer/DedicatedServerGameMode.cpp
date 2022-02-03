// Copyright Epic Games, Inc. All Rights Reserved.

#include "DedicatedServerGameMode.h"
#include "DedicatedServerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADedicatedServerGameMode::ADedicatedServerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
