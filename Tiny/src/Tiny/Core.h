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