//if we fail more than three times in the combinations this file is executed. 
//and everything is reset to 0
void attempt(){
  if(intentos== 3){
    digitalWrite(error,HIGH);
    lcd.setCursor(4,0);
    lcd.print("Sistema"); // lcd.print("system");
    lcd.setCursor(3,1);
    lcd.print("Bloqueado"); //lcd.print("blocked");
    delay(4000);
    lcd.clear();
    lcd.setCursor(2,0);
    lcd.print("Volviendo al"); //lcd.print("back to the");
    lcd.setCursor(4,1);
    lcd.print("principio"); //lcd.print("beginning");
    delay(2000);
    lcd.clear();
    modo=1;
    v=1;
    reset_count();
    //we turn off all leds
    for(int i= 3; i<6;i++)
    {
      digitalWrite(i,LOW);  
    }
    intentos=0;
    digitalWrite(error,LOW);
  }
}
