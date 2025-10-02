// Copyright Epic Games, Inc. All Rights Reserved.

#include "DialogueSystemGameMode.h"
#include "DialogueSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADialogueSystemGameMode::ADialogueSystemGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
