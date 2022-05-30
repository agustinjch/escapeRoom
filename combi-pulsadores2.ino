#include "constants.h"
#include "counters.h"
#include "library.h"
#include "setup.h"
#include "switch.h"
#include "time.h"
#include "next_level.h"
#include "read_buttons.h"
#include "overcome.h"
#include "init.h"
#include "attempts.h"

void setup()
{

  setup();
}

void loop()
{

  init();
  attempt();

  if (modo == 1)
  {
    read_switch();
    read_buttonsM1();
  }
  if (modo == 2)
  {
    read_switch();
    read_buttonsM2();
  }
  if (modo == 3)
  {
    read_switch();
    read_buttonsM3();
  }

  if (modo == 4)
  {
    overcome();
  }
}
