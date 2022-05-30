

void do_init()
{

  if (digitalRead(go) == LOW)
  {
    delay(timer);
    modo = 1;
    v = 1;
  }
}
