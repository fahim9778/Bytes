// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BytesGameMode.h"
#include "BytesHUD.h"
#include "BytesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABytesGameMode::ABytesGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABytesHUD::StaticClass();
}
