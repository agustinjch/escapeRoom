void read_buttonsM1(){
  if(digitalRead(pul1) == LOW){
        delay(210);

    while(digitalRead(pul1) == LOW);
      contador1++;
    Serial.print("C1 ");
    Serial.println(contador1);
    lcd.setCursor(4,0);
    lcd.print(contador1);
 
    
    if(contador1 == 4){
      contador1 = 0;
    }    
  
  }


    if(digitalRead(pul2) == LOW){
  
    delay(timee);
    
    while(digitalRead(pul2) == LOW);
    contador2++;
    Serial.print("C2 ");
    Serial.println(contador2);
    
    if(contador2 == 4){
      contador2 = 0;
    }
  }


  if(digitalRead(pul3) == LOW){
  
    delay(timee);
    
    while(digitalRead(pul3) == LOW);
    contador3++;
    Serial.print("C3 ");
    Serial.println(contador3);

    lcd.setCursor(4,1);
    lcd.print(contador3);

    if(contador3 == 4){
      contador3 = 0;
    }
  }
    if(digitalRead(check) == LOW){
    //Serial.println("pre");
    delay(timee);
  
    if((contador1 == 2) & (contador2 == 3) & (contador3==2)){
  
      digitalWrite(led1,HIGH);
      next_level1();
      
             
    }
    else{
      lcd.clear();
      lcd.setCursor(2,0);
      lcd.print("INCORRECTO");
      digitalWrite(error,HIGH);
      delay(900);
      lcd.clear();
      
      digitalWrite(error,LOW);
        modo=1;
        intentos++;  
        
    }   
   }
}

void read_buttonsM2(){
  if(digitalRead(pul1) == LOW){
        delay(timee);
        

      while(digitalRead(pul1) == LOW);
      contador4++;
      Serial.print("C4 ");
      Serial.println(contador5);
      
      
    
    if(contador4 == 4){
      contador4 = 0;
    }    
  
  }// if digital pul1 (modo2)
      
      
      if(digitalRead(pul2) == LOW)
      {
        delay(timee);
        
        while(digitalRead(pul2) == LOW);
        contador5++;
        Serial.print("C5 ");
      Serial.println(contador5);
    
      if(contador5 == 4)
        {
        contador5 = 0;
      } 
        
      }//if digital pul2 (modo2)
      
      if(digitalRead(pul3) == LOW)
      {
        delay(timee);
        
        while(digitalRead(pul3) == LOW);
        contador6++;
        Serial.print("C6 ");
      Serial.println(contador6);
    
      if(contador6 == 4)
        {
          contador7 = 0;
        } 
        
      } // if pul3 modo2


      if(digitalRead(check) == LOW){
    
      delay(timee);
  
      if((contador4 == 3) & (contador5 == 2) & (contador6==3)){
  
        digitalWrite(led2,HIGH);
          
          next_level2();
        
      }
      else{
        lcd.clear();
        lcd.setCursor(2,0);
        lcd.print("INCORRECTO");
        digitalWrite(error,HIGH);
        delay(900);
        lcd.clear();
        
        digitalWrite(error,LOW);
          modo=2;
          intentos++; 
          
      }   
    }
      
}

void read_buttonsM3(){
  
  if(digitalRead(pul1) == LOW){
        delay(timee);
        

      while(digitalRead(pul1) == LOW);
      contador7++;
      Serial.print("C7 ");
      Serial.println(contador7);

    if(contador7 == 4){
      contador7 = 0;
    }    
  
  }// if digital pul1 (modo3)
      
      
      if(digitalRead(pul2) == LOW)
      {
        delay(timee);
        
        while(digitalRead(pul2) == LOW);
        contador8++;
        Serial.print("C8 ");
      Serial.println(contador8);

     
    
      if(contador8 == 4)
        {
        contador8 = 0;
      } 
        
      }//if digital pul2 (modo2)
      
      if(digitalRead(pul3) == LOW)
      {
        delay(timee);
        
        while(digitalRead(pul3) == LOW);
        contador9++;
        Serial.print("C9 ");
      Serial.println(contador9);

    
      if(contador9 == 4)
        {
        contador9 = 0;
      } 
        
      }//if digital pul3 (modo2)

      
        if(digitalRead(check) == LOW){
    
      delay(timee);
  
      if((contador7 == 2) & (contador8 == 2) & (contador9==2)){
  
        digitalWrite(led3,HIGH);
          
          next_level3();
        
      }
      else{
        lcd.clear();
        lcd.setCursor(2,0);
        lcd.print("INCORRECTO");
        digitalWrite(error,HIGH);
        delay(900);
        lcd.clear();
        
        digitalWrite(error,LOW);
          modo=3;
          intentos++; 
          
      }   
    }   
   } 

 
      
