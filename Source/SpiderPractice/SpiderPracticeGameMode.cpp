// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpiderPracticeGameMode.h"
#include "SpiderPracticeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpiderPracticeGameMode::ASpiderPracticeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
