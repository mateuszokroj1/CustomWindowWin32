#pragma once

#include <string>
#include <string_view>
#include <Windows.h>

LRESULT CALLBACK mainWindowProcedure(HWND window_handle, UINT message, WPARAM wParam, LPARAM lParam);

constexpr char className[] = "app_MainWindow";

class MainWindow
{
public:
  MainWindow(HINSTANCE instance_handle, std::wstring&& title);

  bool showWindow(int visibility = SW_SHOWDEFAULT);



  int style = 0;
  int cbClassExtra = 0;
  int cbWndExtra = 0;
  HINSTANCE instance = nullptr;
  HICON icon = nullptr;
  HCURSOR cursor = nullptr;
  HBRUSH backgroundBrush = nullptr;
  std::string menuName;
  std::wstring title;

  DWORD lastErrorCode = 0;

private:
  ATOM _registeredClass = 0;
};