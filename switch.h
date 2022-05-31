/*
 * In this case I have 3 cases, because there are 3 different modes. 
 * Each time the 3 digit key is correct, we go to the next case.
 * 
 */


byte v = 0; // variable for the switch

void read_switch()
{

  switch (v)
  {
  case 1:
    lcd.setCursor(0, 0);
    lcd.print("B1: "); //button1

    lcd.setCursor(4, 0);
    lcd.print(counter1);

    lcd.setCursor(8, 0);
    lcd.print("B2: ");//button2
    lcd.setCursor(12, 0);
    lcd.print(counter2);

    lcd.setCursor(0, 1);
    lcd.print("B3: ");
    lcd.setCursor(4, 1);
    lcd.print(counter3);
    break;

  case 2:
    lcd.setCursor(0, 0);
    lcd.print("B1: ");

    lcd.setCursor(4, 0);
    lcd.print(counter4);

    lcd.setCursor(8, 0);
    lcd.print("B2: ");
    lcd.setCursor(12, 0);
    lcd.print(counter5);

    lcd.setCursor(0, 1);
    lcd.print("B3: ");
    lcd.setCursor(4, 1);
    lcd.print(counter6);
    break;

  case 3:
    lcd.setCursor(0, 0);
    lcd.print("B1: ");

    lcd.setCursor(4, 0);
    lcd.print(counter7);

    lcd.setCursor(8, 0);
    lcd.print("B2: ");
    lcd.setCursor(12, 0);
    lcd.print(counter8);

    lcd.setCursor(0, 1);
    lcd.print("B3: ");
    lcd.setCursor(4, 1);
    lcd.print(counter9);
    break;
  }
}
