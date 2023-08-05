#pragma once

#include <Windows.h>

#include <string>
#include <map>

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

void InitMessageMap();
const char* GetMessageAsString(UINT msg);

std::string FormatMessage(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

extern std::map<int, const char*>* mapOfMsgs;