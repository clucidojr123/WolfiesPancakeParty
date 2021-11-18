// Copyright Epic Games, Inc. All Rights Reserved.

#include "WolfiesPancakePartyGameMode.h"
#include "WolfiesPancakePartyHUD.h"
#include "WolfiesPancakePartyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWolfiesPancakePartyGameMode::AWolfiesPancakePartyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_WolfiesPancakePartyCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWolfiesPancakePartyHUD::StaticClass();
}
