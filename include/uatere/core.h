#ifndef UATERE_CORE_H
#define UATERE_CORE_H

#include "common.h"

class Core {
public:
  bool Init();
  bool NeedToQuit();
  void Update();
  int Shutdown();
  int GetKey();
  static void GetScreenSize(v2d &screen_size);

private:
  v2d _screen_size;
  bool _need_to_quit;
  int _ch;
};

#endif
