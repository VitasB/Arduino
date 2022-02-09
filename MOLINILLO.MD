
# Molinillo 
Inducción
Energia: potencia>Tiempo
E= P x T
P= I V
Potencia= Intensidad = Voltaje
I= V/R
Intensidad= Voltaje / resistencia

– 1 Transistor 

– 1 Resistencia 

– 1 Diodo 

– 1 Motor de corriente continua.

– 1 Batería de 9V.

– 1 Conector que nos permita enlazar la batería a la protoboard.

– 1 Pulsador.

El código:
```c++

const int switchPin = 2;
const int motorPin = 9;
int switchState = 0;
void setup() {

   pinMode(motorPin, OUTPUT);
    pinMode(switchPin, INPUT);
void loop() {

   switchState = digitalRead(switchPin);

   if (switchState == HIGH) {
        digitalWrite(motorPin, HIGH);

   }
    else {
        digitalWrite(motorPin, LOW);
    }
    
