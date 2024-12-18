// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "HttpServerPlus.h"
#include "WebServer.h"


#define LOCTEXT_NAMESPACE "FHttpServerPlusModule"

void FHttpServerPlusModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	HttpServerPlus::FWebServer::Stop();
	if (!GIsEditor)
	{
		Port = DEFAULT_PORT;
		HttpServerPlus::FWebServer::Start(Port);
	}
}

void FHttpServerPlusModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that supporWt dynamic reloading,
	// we call this function before unloading the module.
	HttpServerPlus::FWebServer::Stop();
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FHttpServerPlusModule, HttpServerPlus)