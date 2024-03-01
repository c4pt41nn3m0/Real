#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Real {

	std::shared_ptr<spdlog::logger> Log::CoreLogger;
	std::shared_ptr<spdlog::logger> Log::ClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");

		CoreLogger = spdlog::stdout_color_mt("RealEngine");
		CoreLogger->set_level(spdlog::level::trace);
		ClientLogger = spdlog::stdout_color_mt("RealApp");
		ClientLogger->set_level(spdlog::level::trace);
	}
}