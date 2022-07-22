// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonShootingGameMode.h"
#include "ThirdPersonShootingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonShootingGameMode::AThirdPersonShootingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
