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

private:
  bool _need_to_quit;
  int _ch;
};

#endif
