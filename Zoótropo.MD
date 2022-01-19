## Zoótropo

materiales:

  2 resistencias
    1 potenciómetro
    2 botones
    batería de 9 V
     motor
    chip H-bridge (puente en H)
    
   
   código:
   ```c++

//el puente en H controla el encendido y apagado
const int controlPin1 = 2;
const int controlPin2 = 3;
const int enablePin = 9;

//botones
const int directionSwitchStatePin = 4;
const int onOffSwitchStatePin = 5;

//potenciómetro
const int potPin = A0;

int onOffSwitchState = 0;
int previousOnOffSwitchState = 0;
int directionSwitchState = 0;
int previousDirectionSwitchState = 0;

int motorEnabled = 0;
int motorSpeed = 0;
int motorDirection = 1;

void setup(){

//declarar entradas y salidas
  pinMode(directionSwitchStatePin, INPUT);
  pinMode(onOffSwitchStatePin, INPUT);
  pinMode(controlPin1, OUTPUT);
  pinMode(controlPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);

  //apaga el motor inicialmente
  digitalWrite(enablePin, LOW);
}

void loop(){
  onOffSwitchState = digitalRead(onOffSwitchStatePin);
  delay(1);
  directionSwitchState = digitalRead(directionSwitchStatePin);
  motorSpeed = analogRead(potPin)/4;
  
  if(onOffSwitchState != previousOnOffSwitchState){
    if(onOffSwitchState == HIGH){
      motorEnabled = !motorEnabled;  
//las exclamaciones invierten el estado de la variable

    }//end of nested(if)
  }//end of outer (if)
  
  if(directionSwitchState != previousDirectionSwitchState){
    if(directionSwitchState ==HIGH){
      motorDirection = !motorDirection;  //cambia la dirección del motor
    } //end of nested if()
  } //end of outer (if)
  
  if(motorDirection == 1){    

//con esto se hace la configuración del puente en H
    digitalWrite(controlPin1, HIGH);
    digitalWrite(controlPin2, LOW);
  }
  else{
    digitalWrite(controlPin1, LOW);
    digitalWrite(controlPin2, HIGH);
  }
  
  if (motorEnabled == 1){

    //determina la velocidad
    analogWrite(enablePin, motorSpeed);
  }
  else{
    analogWrite(enablePin, 0);
  }
  
  previousDirectionSwitchState = directionSwitchState;
  previousOnOffSwitchState = onOffSwitchState;
} 



