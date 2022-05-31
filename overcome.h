//this file is executed when we have completed the 3 combinations successfully.


#include "melody.h"
#include "reset_counters.h"

byte x  = 0;  //variable for the final led sequence

void overcome(){
     lcd.setCursor(0,0);
     lcd.print("  FELICIDADES       "); // lcd.print("congratulations");
     lcd.setCursor(0,1);
     lcd.print("           ");
     digitalWrite(exitt,LOW); // the relay is activated

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
      digitalWrite(exitt,HIGH); // relay switches off
      for(int i= 2; i<5;i++)
    {
      digitalWrite(i,LOW);  
    }


    
     
}
