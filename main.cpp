#include <windows.h>

int WINAPI wWinMain(HINSTANCE instance_handler, HINSTANCE prev_instance_handler, PWSTR command_line, int window_visibility)
{
    MessageBoxA(0, "text", "text", 0);
    return 0;
}