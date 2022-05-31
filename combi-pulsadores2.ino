// I include all the external files I need for the program.

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
  // setup.h file
  do_setup();
}

void loop()
{
  //init.h file
  do_init();
  //attempts.h file
  attempt();
  
  //1º combination
  if (modo == 1)
  {
    read_switch();
    read_buttonsM1();
  }

  //2º combination
  if (modo == 2)
  {
    read_switch();
    read_buttonsM2();
  }

  //3º combination
  if (modo == 3)
  {
    read_switch();
    read_buttonsM3();
  }
  //overcome the combinations
  if (modo == 4)
  {
    overcome();
  }
}
