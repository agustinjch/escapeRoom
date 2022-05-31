//until the go button is pressed, the program will not run.

void do_init()
{

  if (digitalRead(go) == LOW)
  {
    delay(timer);
    modo = 1;
    v = 1; //variable the switch file
  }
}
