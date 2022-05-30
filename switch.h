
byte v = 0;   // variable para el switch


void read_switch(){

  switch(v){
    case 1:
          lcd.setCursor(0,0);
          lcd.print("B1: ");
    
          lcd.setCursor(4,0);
          lcd.print(contador1);

          lcd.setCursor(8,0);
          lcd.print("B2: ");
          lcd.setCursor(12,0);
          lcd.print(contador2);

          lcd.setCursor(0,1);
          lcd.print("B3: ");
          lcd.setCursor(4,1);
          lcd.print(contador3);
          break;

   case 2:
          lcd.setCursor(0,0);
          lcd.print("B1: ");
    
          lcd.setCursor(4,0);
          lcd.print(contador4);

          lcd.setCursor(8,0);
          lcd.print("B2: ");
          lcd.setCursor(12,0);
          lcd.print(contador5);

          lcd.setCursor(0,1);
          lcd.print("B3: ");
          lcd.setCursor(4,1);
          lcd.print(contador6);
          break;


  case 3:
          lcd.setCursor(0,0);
          lcd.print("B1: ");
    
          lcd.setCursor(4,0);
          lcd.print(contador7);

          lcd.setCursor(8,0);
          lcd.print("B2: ");
          lcd.setCursor(12,0);
          lcd.print(contador8);

          lcd.setCursor(0,1);
          lcd.print("B3: ");
          lcd.setCursor(4,1);
          lcd.print(contador9);
          break;

   
  }

  
}
