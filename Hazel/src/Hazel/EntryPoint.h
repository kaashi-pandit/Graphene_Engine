#pragma once
#include "Application.h"


#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main( int argc, char** argv)
{	
	Hazel::Log::Init();
	//Hazel::Log::GetCoreLogger()->warn("Initialized log");
	//Hazel::Log::GetClientLogger()->warn("Hello!");

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#else
#error Hazel only support Windows!
#endif // HZ_PLATFORM_WINDOWS