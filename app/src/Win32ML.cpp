#include <Win32ML\Messages.hpp>

int CALLBACK WinMain(
    HINSTANCE hInst,
    HINSTANCE hpi,
    LPSTR     idc,
    int       wut
) {

    InitMessageMap();

    const wchar_t* appClassName = L"Win32ML";

    WNDCLASSEXW wcexw = { 0 };
    wcexw.cbSize = sizeof(WNDCLASSEXW);
    wcexw.style = CS_OWNDC;
    wcexw.lpfnWndProc = WindowProcedure;
    wcexw.cbClsExtra = 0;
    wcexw.hInstance = hInst;
    wcexw.hIcon = nullptr;
    wcexw.hCursor = nullptr;
    wcexw.hbrBackground = (HBRUSH)(COLOR_WINDOW);
    wcexw.lpszMenuName = nullptr;
    wcexw.lpszClassName = appClassName;
    wcexw.hIconSm = nullptr;

    RegisterClassExW(&wcexw);

    HWND mainWindow = CreateWindowExW(
        0,
        appClassName, appClassName,
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
        nullptr, nullptr, hInst, nullptr
    );

    ShowWindow(mainWindow, SW_SHOW);

    MSG msg;
    while ((GetMessage(&msg, nullptr, 0, 0))) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }

    return msg.wParam;
}