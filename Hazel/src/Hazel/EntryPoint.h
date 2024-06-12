#pragma once
#include "Application.h"
#include <stdio.h>

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main( int argc, char** argv)
{
	printf("Hari OM");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#else
#error Hazel only support Windows!
#endif // HZ_PLATFORM_WINDOWS