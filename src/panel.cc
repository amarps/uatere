#include "uatere/panel.h"
#include <curses.h>
#include <panel.h>
#include <string>

Panel::Panel(v2d size, v2d position, const std::string &title)
    : _size(size), _position(position), _title(title)
{
  _window = newwin(_size.y, _size.x, _position.y, _position.x);
  box(_window, 0, 0);
  _panel = new_panel(_window);
  SetTitle(title);
  ShowTitle();
}

void Panel::Update(int) {
  update_panels(); /* Update the stacking order. 2nd panel will be on top */
  doupdate(); /* Show it on the screen */
}

void Panel::SetTitle(const std::string &title) {
  _title = title;
}

void Panel::ShowTitle() {
  mvwprintw(_window, 0, 2, "%s", _title.c_str());
  refresh();
}
