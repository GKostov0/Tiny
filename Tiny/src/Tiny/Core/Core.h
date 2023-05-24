#pragma once

#ifdef TY_PLATFORM_WINDOWS

	#ifdef TY_BUILD_DLL
		#define TINY_API __declspec(dllexport)
	#else
		#define TINY_API __declspec(dllimport)
	#endif

#else
	#error Tiny only supports Windows!
#endif

#ifdef TY_ENABLE_ASSERTS
	#define TY_ASSERT(x, ...) { if(!(x)) { HZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define TY_CORE_ASSERT(x, ...) { if(!(x)) { HZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
#define TY_ASSERT(x, ...)
#define TY_CORE_ASSERT(x, ...)
#endif


#define BIT(x) (1 << x)

#define TY_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)