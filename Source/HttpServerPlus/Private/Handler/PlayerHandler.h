#pragma once


#include "HttpServerRequest.h"
#include "HttpResultCallback.h"

namespace HttpServerPlus
{
	class FPlayerHandler
	{
	public:
		/**
		 * get player location
		 */
		static TUniquePtr<FHttpServerResponse> GetPlayerLocation(const FHttpServerRequest& Request);

		/**
		 * set player location
		 */
		static TUniquePtr<FHttpServerResponse> SetPlayerLocation(const FHttpServerRequest& Request);

		/**
		 * get player rotation
		 */
		static TUniquePtr<FHttpServerResponse> GetPlayerRotation(const FHttpServerRequest& Request);

		/**
		 * set player rotation
		 */
		static TUniquePtr<FHttpServerResponse> SetPlayerRotation(const FHttpServerRequest& Request);
	};
}