// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectReverseGameMode.h"
#include "ProjectReverseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectReverseGameMode::AProjectReverseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
