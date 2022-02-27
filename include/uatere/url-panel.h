#ifndef UATERE_URL_PANEL_H
#define UATERE_URL_PANEL_H

#include "uatere/common.h"
#include "uatere/panel.h"
#include "uatere/screen.h"

class UrlPanel : Panel {
public:
  UrlPanel() : Panel(Screen::GetSize()/5, v2d(5, 5)) {
	
  }

private:
};

#endif
