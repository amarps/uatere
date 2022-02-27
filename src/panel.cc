#include "uatere/panel.h"
#include <curses.h>
#include <panel.h>
#include <string>

Panel::Panel(v2d size, v2d position) : _size(size), _position(position)
{
  _window = newwin(_size.y, _size.x, _position.y, _position.x);
  box(_window, 0, 0);
  _panel = new_panel(_window);
}

WINDOW *Panel::GetWindow() { return _window; }
PANEL *Panel::GetPanel() { return _panel; }

void Panel::Update(int)
{
  update_panels(); /* Update the stacking order. 2nd panel will be on top */
  doupdate();      /* Show it on the screen */
}

void Panel::ReplaceWindow(WINDOW *new_win) {
  auto temp_win = _window;
  _window = new_win;
  box(_window, 0, 0);
  replace_panel(_panel, _window);
  delwin(temp_win);
  refresh();
}
