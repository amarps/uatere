#include "uatere/common.h"
#include "uatere/core.h"
#include "uatere/panel.h"

int main() {
  Core core;
  core.Init();

  v2d screen_size;
  Core::GetScreenSize(screen_size);
  Panel panel1(screen_size, v2d(0,0), "UaTere");
  
  while (!core.NeedToQuit()) {
	panel1.Update(core.GetKey());
    core.Update();
  }
  core.Shutdown();
  return 0;
}
