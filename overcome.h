#include "melody.h"
#include "reset_counters.h"

byte x  = 0;  //para la secuencia final de leds

void overcome(){
     lcd.setCursor(0,0);
     lcd.print("  FELICIDADES       ");
     lcd.setCursor(0,1);
     lcd.print("           ");
     digitalWrite(exitt,LOW); // el rele se activa

    while(x <= 6){
    for(int i= 3; i<6;i++)
    {
      digitalWrite(i,HIGH);
      delay(100);
      digitalWrite(i,LOW);  
    }
      x++;
      
    }


      melody();
      modo=1;
      v=1;
      x=0;
      reset_count();
      lcd.clear();
      digitalWrite(exitt,HIGH); // EL rele se desconecta 
      for(int i= 2; i<5;i++)
    {
      digitalWrite(i,LOW);  
    }


    
     
}
