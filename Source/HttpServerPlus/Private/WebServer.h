#pragma once

#include "IHttpRouter.h"

namespace HttpServerPlus
{
	class FWebServer
	{
	public:
		/**
		 * Start server
		 */
		static void Start(uint32 Port);

		/**
		 * Stop server
		 */
		static void Stop();

	private:
		/**
		 * Bind routers with handlers
		 */
		static void BindRouters(const TSharedPtr<IHttpRouter>& HttpRouter);
	};

}