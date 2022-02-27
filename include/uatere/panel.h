#ifndef UATERE_PANEL_H
#define UATERE_PANEL_H

#include "common.h"
#include <string>

struct _win_st;
typedef _win_st WINDOW;
struct panel;
typedef panel PANEL;

class Panel{
public:
  Panel(v2d size, v2d position, const std::string &title);
  void Update(int keypad);
  void SetTitle(const std::string &title);
  void ShowTitle();

private:
  PANEL* _panel;
  WINDOW* _window;

  v2d _size;
  v2d _position;
  std::string _title;
};

#endif
