#include "uatere/page.h"
#include "panel.h"
#include "uatere/common.h"
#include "uatere/screen.h"
#include <curses.h>

Page::Page(const std::string &title) :_panel(Screen::GetSize(), v2d())
{
  SetTitle(title);
  ShowTitle();
}

void Page::SetTitle(const std::string &title) {
  _title = " " + title + " ";
}

void Page::ShowTitle() {
  mvwprintw(_panel.GetWindow(), 0, 2, "%s", _title.c_str());
  refresh();
}

void Page::Update(int keypad) {
  _panel.Update(keypad);
  if (keypad == KEY_RESIZE) {
	auto size = Screen::GetSize();
	_panel.ReplaceWindow(newwin(size.y, size.x, 0, 0));
    SetTitle(_title);
    ShowTitle();
	refresh();
	_panel.Update(0);
  }
}
