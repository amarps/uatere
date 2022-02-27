#ifndef UATERE_PANEL_H
#define UATERE_PANEL_H

#include "common.h"

struct _win_st;
typedef _win_st WINDOW;
struct panel;
typedef panel PANEL;

class Panel{
public:
  Panel(v2d size, v2d pos);
  void Update(int keypad);
  v2d GetSize();
  v2d GetPosition();
  WINDOW* GetWindow();
  void ReplaceWindow(WINDOW *new_win);
  PANEL* GetPanel();

private:
  PANEL* _panel;
  WINDOW* _window;

  v2d _size;
  v2d _position;
};

#endif
