// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_ACTGameMode.h"
#include "Project_ACTCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_ACTGameMode::AProject_ACTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
