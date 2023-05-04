#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Tiny
{
	class TINY_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define TY_CORE_TRACE(...)  ::Tiny::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define TY_CORE_INFO(...)   ::Tiny::Log::GetCoreLogger()->info(__VA_ARGS__)
#define TY_CORE_WARN(...)   ::Tiny::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define TY_CORE_ERROR(...)  ::Tiny::Log::GetCoreLogger()->error(__VA_ARGS__)
#define TY_CORE_FATAL(...)  ::Tiny::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define TY_TRACE(...)       ::Tiny::Log::GetClientLogger()->trace(__VA_ARGS__)
#define TY_INFO(...)        ::Tiny::Log::GetClientLogger()->info(__VA_ARGS__)
#define TY_WARN(...)        ::Tiny::Log::GetClientLogger()->warn(__VA_ARGS__)
#define TY_ERROR(...)       ::Tiny::Log::GetClientLogger()->error(__VA_ARGS__)
#define TY_FATAL(...)       ::Tiny::Log::GetClientLogger()->fatal(__VA_ARGS__)