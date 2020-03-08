#include "../header/main.h"


/* Global instance handle */
HINSTANCE g_hInstance = NULL;

INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
        LPSTR lpCmdLine, int nCmdShow) {

    char buffer[10];


    UINT result = MessageBoxA(NULL, lpCmdLine, "title", MB_OKCANCEL);

    switch (result)
    {
    case IDOK :
        MessageBoxA(NULL, lpCmdLine, "OKKKK", MB_OKCANCEL);
        break;

    case IDCANCEL:
        MessageBoxA(NULL, lpCmdLine, "CANCELLLl", MB_OKCANCEL);
            break;
    default:
        break;
    }


    return 0;
}