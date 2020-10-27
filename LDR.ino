void setup() {
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float v, Rl,Il;
  delay(1000);
  v=analogRead(A0);
  v=v*(5.0/1023.0);
  Serial.println();
  Serial.print("Voltaje de entrada:");
  Serial.print(v);
  Serial.print(" V");
  Serial.println();
  Rl=613*((5/v)-1);
  Il=pow((Rl/126951),-1.1655);
  
  Serial.print("Resistencia del LDR: ");  
  Serial.print(Rl);
  Serial.print(" Ohms");
  Serial.println();
  
  Serial.print("Intensidad luminosa: ");
  Serial.print(Il);
  Serial.print(" Cd");
  Serial.println();
  
  if(Il<=2000){
     digitalWrite(13,HIGH);
   }else{
     digitalWrite(13,LOW);
   }
}



  
  
