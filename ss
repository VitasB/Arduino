  else if(keyVal >= 990 && keyVal <=1010){
    tone(8, notes[1]);
  }
  else if(keyVal >= 505 && keyVal <= 515){
    tone(8, notes[2]);
  }
  else if(keyVal >= 5 && keyVal <=10){
    tone(8, notes[3]);
  }
  else if (keyVal <=4){
    Serial.println("No estás pulsando ningún botón");
    noTone(8);
  }
