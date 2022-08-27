#pragma once

#ifdef REAL_PLATFORM_WINDOWS 
	#ifdef REAL_BUILD_DLL
		#define REAL_API _declspec(dllexport)
	#else
		#define REAL_API _declspec(dllimport)	
	#endif
#else
	#error Real Engine only supports windows right now !
#endif