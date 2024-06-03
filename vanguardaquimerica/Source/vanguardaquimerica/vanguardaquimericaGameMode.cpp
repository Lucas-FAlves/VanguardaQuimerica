// Copyright Epic Games, Inc. All Rights Reserved.

#include "vanguardaquimericaGameMode.h"
#include "vanguardaquimericaPlayerController.h"
#include "vanguardaquimericaPawn.h"

AvanguardaquimericaGameMode::AvanguardaquimericaGameMode()
{
	// no pawn by default
	DefaultPawnClass = AvanguardaquimericaPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AvanguardaquimericaPlayerController::StaticClass();
}
