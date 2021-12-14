

int notes[] = {262,294,330,349};

void setup(){
  Serial.begin(9600);
}

void loop(){

  
  
  int keyVal = analogRead(A0); 
  int valorPotenciometro =  analogRead(A1);

  Serial.println(keyVal);
  Serial.print("Valor del potenciómetro: ");
  Serial.println(valorPotenciometro);
  int valorVariacion = map(valorPotenciometro, 0,1023, -100,100);
  Serial.print("Valor de la variación");
  Serial.println(valorVariacion);
  
  if(keyVal >=1021){
    tone(8, notes[0]+valorVariacion);
  }
  
  else if(keyVal >= 990 && keyVal <=1010){
    tone(8, notes[1]+valorVariacion);
  }
  else if(keyVal >= 505 && keyVal <= 515){
    tone(8, notes[2]+valorVariacion);
  }
  else if(keyVal >= 5 && keyVal <=10){
    tone(8, notes[3]+valorVariacion);
  }
  else if (keyVal <=4){
    Serial.println("No estás pulsando ningún botón");
    noTone(8);
  }
  else{
    noTone(8);
  }
}
