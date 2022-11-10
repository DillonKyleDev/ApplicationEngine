#pragma once

#ifdef GE_PLATFORM_WINDOWS

#include "Log.h"

extern GameEngine::Application* GameEngine::CreateApplication();

int main(int argc, char** argv)
{
	GameEngine::Log::Init();
	GE_CORE_ERROR("Initialized Log...");
	int a = 5;
	GE_INFO("Here's some info... Var={0}", a);


	auto app = GameEngine::CreateApplication();
	app->Run();

	delete app;
}

#endif
