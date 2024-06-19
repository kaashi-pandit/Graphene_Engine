#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Hazel 
{
	HAZEL_API std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	HAZEL_API std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	
	void Log::Init()
	{
		//Set pattern
		spdlog::set_pattern("%^[%T] %n: %v%$");

		//Core
		s_CoreLogger = spdlog::stdout_color_mt("Hazel");		
		s_CoreLogger->set_level(spdlog::level::trace);

		//Client
		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}

	std::shared_ptr<spdlog::logger>& Log::GetCoreLogger()
	{	
		return s_CoreLogger;
	}

	std::shared_ptr<spdlog::logger>& Log::GetClientLogger()
	{
		return s_ClientLogger;
	}
}