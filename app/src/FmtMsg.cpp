#include <Win32ML\Messages.hpp>

#include <sstream>
#include <string>
#include <iomanip>

std::stringstream stringBuilder;

std::string FormatMessage(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    stringBuilder.clear();

    stringBuilder << "-----------\n";

    stringBuilder << "HWND Value:     ";
    stringBuilder << "0x" << std::hex
        << std::setfill('0') << std::setw(sizeof(size_t) * 2)
        << hWnd << "\n";

    stringBuilder << "Code:           ";

    stringBuilder << "0x" << std::hex 
        << std::setfill('0') 
        << std::setw(8) << msg;
    stringBuilder << " (" << std::dec 
        << std::setfill(' ') << std::setw(10)
        << msg << ")\n";
    
    stringBuilder << "WPARAM:         0x" 
        << std::hex << std::setfill('0')
        << std::setw(8) << wParam;
    stringBuilder << " (" 
        << std::dec << std::setfill(' ')
        << std::setw(10) << wParam << ")\n";

    stringBuilder << "LPARAM:         0x"
        << std::hex << std::setfill('0')
        << std::setw(8) << lParam;
    stringBuilder << " ("
        << std::dec << std::setfill(' ')
        << std::setw(10) << lParam << ")\n";

    stringBuilder << "Message Name:   " << GetMessageAsString(msg) << "\n";

    stringBuilder << "-----------\n";

    return stringBuilder.str();
}