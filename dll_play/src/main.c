#include "../header/main.h"

BOOL WINAPI DllMain(
	HINSTANCE hinstDLL,  // handle to DLL module
	DWORD fdwReason,     // reason for calling function
	LPVOID lpReserved)  // reserved

{
	// Perform actions based on the reason for calling.
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:

		while (MessageBox(NULL, L"the program has been hacked!", L"press ok and exit", MB_ICONERROR | MB_OK)!=
			IDOK) {
			Beep(750,1000000000);
		}
		break;

	case DLL_THREAD_ATTACH:

		while (MessageBox(NULL, L"the program has been hacked!", L"press ok and exit", MB_ICONERROR | MB_OK) !=
			IDOK) {
			Beep(750, 1000000000);
		}
		break;

	case DLL_THREAD_DETACH:
		// Do thread-specific cleanup.
		break;

	case DLL_PROCESS_DETACH:
		// Perform any necessary cleanup.
		break;
	}
	return TRUE;  // Successful DLL_PROCESS_ATTACH.
}
//
//int calc(int a, int b) {
//	return a > b ? a + b : a - b;
//}
//
//int Abs(int a) {
//	return a < 0 ? -a : a;
//}