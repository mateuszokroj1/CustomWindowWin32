#include "MainWindow.hpp"

MainWindow::MainWindow(HINSTANCE instance_handle, std::wstring&& title): title(std::move(title))
{
  icon = LoadIconA(instance_handle, IDI_APPLICATION);
  cursor = LoadCursorA(nullptr, IDC_ARROW);
  backgroundBrush = GetSysColorBrush(COLOR_WINDOW);
}

bool MainWindow::showWindow(int visibility)
{
  WNDCLASSEX window_class;
  window_class.cbSize = sizeof(WNDCLASSEX);
  window_class.style = style;
  window_class.lpfnWndProc = &mainWindowProcedure;
  window_class.cbClsExtra = cbClassExtra;
  window_class.hInstance = instance;
  window_class.hIcon = icon;
  window_class.hCursor = cursor;
  window_class.hbrBackground = backgroundBrush;
  window_class.lpszMenuName = !menuName.empty() ? menuName.c_str() : nullptr;
  window_class.lpszClassName = className;
  window_class.hIconSm = icon;

  _registeredClass = RegisterClassExA(&window_class);
  if(_registeredClass == 0)
  {
	lastErrorCode = GetLastError();
	SetLastError(0);

	return false;
  }
  

  return true;
}

LRESULT CALLBACK mainWindowProcedure(HWND window_handle, UINT message, WPARAM wParam, LPARAM lParam)
{
  return DefWindowProc(window_handle, message, wParam, lParam);
}