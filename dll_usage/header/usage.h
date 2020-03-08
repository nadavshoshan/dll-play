#pragma once
#include <stdio.h>
#include <Windows.h>

#define MY_DLL "dll_play.dll"
#define CALC "calc"
#define ABS "Abs"

typedef int(*int_from_one_arg)(int);
typedef int(*int_from_two_args)(int, int);