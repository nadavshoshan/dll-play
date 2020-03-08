#pragma once

#include <Windows.h>

#ifdef _WIN32
#    ifdef LIBRARY_EXPORTS
#        define LIBRARY_API __declspec(dllexport)
#    else
#        define LIBRARY_API __declspec(dllimport)
#    endif
#elif
#    define LIBRARY_API
#endif

LIBRARY_API int calc(int a, int b); 

LIBRARY_API int Abs(int a);