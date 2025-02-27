#ifndef DLL_FUNC
#define DLL_FUNC

#ifdef _WIN32
	#ifdef BUILD_BAR
		#define BAR_API __declspec(dllexport)
	#else
		#define BAR_API __declspec(dllimport)
	#endif
#else
	#define BAR_API
#endif

BAR_API void dll_func();

#endif