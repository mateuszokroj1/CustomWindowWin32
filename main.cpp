#include <Windows.h>

#include <string>

#include "MainWindow.hpp"

int WINAPI wWinMain(HINSTANCE instance_handle, HINSTANCE prev_instance_handle, PWSTR command_line, int window_visibility)
{
    std::wstring cmd_line_string(command_line);

    MainWindow window(instance_handle, L"Title");
    window.showWindow();
    return 0;
}