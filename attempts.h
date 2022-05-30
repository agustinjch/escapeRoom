

void attempt(){
  if(intentos== 3){
    digitalWrite(error,HIGH);
    lcd.setCursor(4,0);
    lcd.print("Sistema");
    lcd.setCursor(3,1);
    lcd.print("Bloqueado");
    delay(4000);
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("Volviendo al");
    lcd.setCursor(4,1);
    lcd.print("principio");
    delay(2000);
    lcd.clear();
    modo=1;
    v=1;
    reset_count();
    for(int i= 3; i<6;i++)
    {
      digitalWrite(i,LOW);  
    }
    intentos=0;
    digitalWrite(error,LOW);
  }
}
