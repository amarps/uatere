#include "uatere/core.h"
#include "uatere/panel.h"
#include <curses.h>
#include <string>

#define CTRL(c) ((c) & 037)

using std::string;

bool
Core::Init() {
  initscr();            /* Start curses mode 		*/
  cbreak();                /* Line buffering disabled	*/
  keypad(stdscr, TRUE); /* We get F1, F2 etc..		*/
  noecho();             /* Don't echo() while we do getch */
  GetScreenSize(_screen_size);
  _need_to_quit = false;

  return true;
}

bool Core::NeedToQuit() {
  return _need_to_quit;
}

void Core::Update() {
  _ch = getch();
  _need_to_quit = _ch == CTRL('c');
}

int Core::Shutdown() {
  endwin();
  return 0;
}

int Core::GetKey() {
  return _ch;
}

void Core::GetScreenSize(v2d &screen_size) {
  getmaxyx(stdscr, screen_size.y, screen_size.x);  
}
