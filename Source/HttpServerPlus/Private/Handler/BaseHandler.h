#pragma once

#include "HttpServerRequest.h"
#include "HttpResultCallback.h"

namespace HttpServerPlus
{
	class FBaseHandler
	{
	public:
		/**
		 * Health Check
		 */
		static TUniquePtr<FHttpServerResponse> HealthCheck(const FHttpServerRequest& Request);


	};
}
