
void setup()
{

  Serial.begin(9600);

  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print(" PULSA EL BOTON");
  lcd.setCursor(5, 1);
  lcd.print("ROJO");
  delay(2500);
  lcd.clear();

  pinMode(pul1, INPUT_PULLUP);
  pinMode(pul2, INPUT_PULLUP);
  pinMode(pul3, INPUT_PULLUP);

  pinMode(check, INPUT_PULLUP);

  pinMode(go, INPUT_PULLUP);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(error, OUTPUT);
  pinMode(exitt, OUTPUT);

  digitalWrite(exitt, HIGH);

  pinMode(BuzzPin, OUTPUT);
}
