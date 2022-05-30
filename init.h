

void init()
{

  if (digitalRead(go) == LOW)
  {
    delay(time);
    modo = 1;
    v = 1;
  }
}
