#include "../header/usage.h"

int main(int argc, char** argv) {

	HMODULE hDll = LoadLibraryA(MY_DLL);

	if (hDll) {

		FARPROC func1 = GetProcAddress(hDll, CALC);
		FARPROC func2 = GetProcAddress(hDll, ABS);

		if (func1) {
			int_from_two_args calc = (int_from_two_args)func1;
			int res1 = calc(4, 3);
			printf("The result is: %d\n", res1);
		}
		else {
			printf("The DLL %s was located - but the function %s is wrong.\n", MY_DLL, CALC);
		}

		if (func2) {
			int_from_one_arg abs = (int_from_one_arg)func2;
			int arg = -100;
			int res2 = abs(arg);
			printf("The absolute value of %d is: %d\n", arg, res2);
		}
		else {
			printf("The DLL %s was located- but the function %s is wrong.\n", MY_DLL, ABS);
		}


		FreeLibrary(hDll);
	}
	else {
		printf("The DLL %s could not be located.\n", MY_DLL);
	}

	
}