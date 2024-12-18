#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Controller.h"

namespace HttpServerPlus
{
	class FPlayerService
	{
	public:
		/**
		 * Get player pawn
		 */
		static APawn* GetPlayerPawn();
	};
}