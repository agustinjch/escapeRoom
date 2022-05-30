void read_buttonsM1()
{
  if (digitalRead(pul1) == LOW)
  {
    delay(210);

    while (digitalRead(pul1) == LOW)
      ;
    counter1++;
    Serial.print("C1 ");
    Serial.println(counter1);
    lcd.setCursor(4, 0);
    lcd.print(counter1);

    if (counter1 == 4)
    {
      counter1 = 0;
    }
  }

  if (digitalRead(pul2) == LOW)
  {

    delay(time);

    while (digitalRead(pul2) == LOW)
      ;
    counter2++;
    Serial.print("C2 ");
    Serial.println(counter2);

    if (counter2 == 4)
    {
      counter2 = 0;
    }
  }

  if (digitalRead(pul3) == LOW)
  {

    delay(time);

    while (digitalRead(pul3) == LOW)
      ;
    counter3++;
    Serial.print("C3 ");
    Serial.println(counter3);

    lcd.setCursor(4, 1);
    lcd.print(counter3);

    if (counter3 == 4)
    {
      counter3 = 0;
    }
  }
  if (digitalRead(check) == LOW)
  {
    // Serial.println("pre");
    delay(time);

    if ((counter1 == 2) & (counter2 == 3) & (counter3 == 2))
    {

      digitalWrite(led1, HIGH);
      next_level1();
    }
    else
    {
      lcd.clear();
      lcd.setCursor(2, 0);
      lcd.print("INCORRECTO");
      digitalWrite(error, HIGH);
      delay(900);
      lcd.clear();

      digitalWrite(error, LOW);
      modo = 1;
      intentos++;
    }
  }
}

void read_buttonsM2()
{
  if (digitalRead(pul1) == LOW)
  {
    delay(time);

    while (digitalRead(pul1) == LOW)
      ;
    counter4++;
    Serial.print("C4 ");
    Serial.println(counter5);

    if (counter4 == 4)
    {
      counter4 = 0;
    }

  } // if digital pul1 (modo2)

  if (digitalRead(pul2) == LOW)
  {
    delay(time);

    while (digitalRead(pul2) == LOW)
      ;
    counter5++;
    Serial.print("C5 ");
    Serial.println(counter5);

    if (counter5 == 4)
    {
      counter5 = 0;
    }

  } // if digital pul2 (modo2)

  if (digitalRead(pul3) == LOW)
  {
    delay(time);

    while (digitalRead(pul3) == LOW)
      ;
    counter6++;
    Serial.print("C6 ");
    Serial.println(counter6);

    if (counter6 == 4)
    {
      counter7 = 0;
    }

  } // if pul3 modo2

  if (digitalRead(check) == LOW)
  {

    delay(time);

    if ((counter4 == 3) & (counter5 == 2) & (counter6 == 3))
    {

      digitalWrite(led2, HIGH);

      next_level2();
    }
    else
    {
      lcd.clear();
      lcd.setCursor(2, 0);
      lcd.print("INCORRECTO");
      digitalWrite(error, HIGH);
      delay(900);
      lcd.clear();

      digitalWrite(error, LOW);
      modo = 2;
      intentos++;
    }
  }
}

void read_buttonsM3()
{

  if (digitalRead(pul1) == LOW)
  {
    delay(time);

    while (digitalRead(pul1) == LOW)
      ;
    counter7++;
    Serial.print("C7 ");
    Serial.println(counter7);

    if (counter7 == 4)
    {
      counter7 = 0;
    }

  } // if digital pul1 (modo3)

  if (digitalRead(pul2) == LOW)
  {
    delay(time);

    while (digitalRead(pul2) == LOW)
      ;
    counter8++;
    Serial.print("C8 ");
    Serial.println(counter8);

    if (counter8 == 4)
    {
      counter8 = 0;
    }

  } // if digital pul2 (modo2)

  if (digitalRead(pul3) == LOW)
  {
    delay(time);

    while (digitalRead(pul3) == LOW)
      ;
    counter9++;
    Serial.print("C9 ");
    Serial.println(counter9);

    if (counter9 == 4)
    {
      counter9 = 0;
    }

  } // if digital pul3 (modo2)

  if (digitalRead(check) == LOW)
  {

    delay(time);

    if ((counter7 == 2) & (counter8 == 2) & (counter9 == 2))
    {

      digitalWrite(led3, HIGH);

      next_level3();
    }
    else
    {
      lcd.clear();
      lcd.setCursor(2, 0);
      lcd.print("INCORRECTO");
      digitalWrite(error, HIGH);
      delay(900);
      lcd.clear();

      digitalWrite(error, LOW);
      modo = 3;
      intentos++;
    }
  }
}
