#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Real 
{
	class REAL_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> CoreLogger;
		static std::shared_ptr<spdlog::logger> ClientLogger;
	};
}

// Core Log Macros
#define REAL_CORE_TRACE(...) ::Real::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define REAL_CORE_INFO(...) ::Real::Log::GetCoreLogger()->info(__VA_ARGS__)
#define REAL_CORE_WARN(...) ::Real::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define REAL_CORE_ERROR(...) ::Real::Log::GetCoreLogger()->error(__VA_ARGS__)
#define REAL_CORE_FATAL(...) ::Real::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log Macros
#define REAL_APP_TRACE(...) ::Real::Log::GetClientLogger()->trace(__VA_ARGS__)
#define REAL_APP_INFO(...) ::Real::Log::GetClientLogger()->info(__VA_ARGS__)
#define REAL_APP_WARN(...) ::Real::Log::GetClientLogger()->warn(__VA_ARGS__)
#define REAL_APP_ERROR(...) ::Real::Log::GetClientLogger()->error(__VA_ARGS__)
#define REAL_APP_FATAL(...) ::Real::Log::GetClientLogger()->fatal(__VA_ARGS__)