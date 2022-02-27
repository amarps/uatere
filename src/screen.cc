#include "uatere/screen.h"
#include "ncurses.h"
#include "uatere/common.h"

v2d Screen::GetSize() {
  int x, y;
  getmaxyx(stdscr, y, x);
  return v2d(x, y);
}
