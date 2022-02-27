#ifndef UATERE_PAGE_H
#define UATERE_PAGE_H

#include "uatere/common.h"
#include "uatere/panel.h"
#include <string>

class Page
{
public:
  Page(const std::string &title);
  void SetTitle(const std::string &title);
  void ShowTitle();
  void Update(int keypad);

private:
  Panel _panel;
  std::string _title;
};

#endif
