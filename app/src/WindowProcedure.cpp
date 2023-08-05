#include <Win32ML\Messages.hpp>

#include <iostream>

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {

    std::cout << FormatMessage(hWnd, msg, wParam, lParam);

    switch (msg) {
    case WM_CLOSE:
        PostQuitMessage(0);
        break; // just because it looks good
    }


    return DefWindowProcW(hWnd, msg, wParam, lParam);
}