# Faltas

Tuvimos un problema con la codificación, daba error, el profesor nos ayudó explicando el motivo del error. Resulta que no puedes hacer el código "void setup()" y "if digitalWrite(6,HIGH)" dos veces porque el programa Arduino da un error

## CODIGO 
```


const int pinLED = 6;
const int pinJoyX = A0;
const int pinJoyY = A1;
const int pinJoyButton = 3;

void setup() {
   pinMode(pinJoyButton , INPUT_PULLUP);   //activar resistencia pull up 
   Serial.begin(9600);
   pinMode(6,OUTPUT);
}

void loop() {
   int Xvalue = 0;
   int Yvalue = 0;
   bool buttonValue = false;

   //leer valores
   Xvalue = analogRead(pinJoyX);
   delay(100);                 //es necesaria una pequeña pausa entre lecturas analógicas
   Yvalue = analogRead(pinJoyY);
   buttonValue = digitalRead(pinJoyButton);

   //mostrar valores por serial
   Serial.print("X:" );
   Serial.print(Xvalue);
   Serial.print(" | Y: ");
   Serial.print(Yvalue);
   Serial.print(" | Pulsador: ");
   Serial.println(buttonValue);
   delay(10);
   if (buttonValue == LOW){
    digitalWrite(6,HIGH);
  
    }
    else {
      digitalWrite(6,LOW);
    }
}
```
# Fotos 

[Foto 1](https://drive.google.com/file/d/1AKpkOiNwWM-hHyJ9z8lMx0r6aU72QSqZ/view)
[Foto 2](https://drive.google.com/file/d/1AKpkOiNwWM-hHyJ9z8lMx0r6aU72QSqZ/view)
[Foto 3](https://drive.google.com/file/d/1AIGKlmKzi6gtdltBFWOyUkdMoHWi8rYz/view)
[Foto 4](https://drive.google.com/file/d/1AfiqEdxSduZo4fibcxITp3imXihwUXks/view)

# Resumen
En la parte superior puede ver el código y las fotos adjuntas después de que el trabajo se haya realizado correctamente, sin errores. Aquí es donde termina este proyecto.
