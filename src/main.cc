#include "uatere/common.h"
#include "uatere/core.h"
#include "uatere/panel.h"
#include "uatere/main-page.h"

int main() {
  Core core;
  core.Init();

  MainPage mainPage;
  
  while (!core.NeedToQuit()) {
	mainPage.Update(core.GetKey());
    core.Update();
  }
  core.Shutdown();
  return 0;
}
