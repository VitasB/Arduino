### WORK

Buenas, hoy hemos hecho un trabajo facíl

Hasta ahora, cuando has querido que algo ocurriera en un intervalo de tiempo específico con el Arduino, has usado delay().

Esto es práctico, pero un poco limitador.

Esto quiere decir que no puede haber ninguna otra entrada o salida mientras está esperrando.

### (1) Conecta la toma de corriente y la toma de tierra de tu protoboard.

### (2) Conecta el ánodo de los seis LEDs a las clavijas digitales 2 a 7.Conecta los LEDs a la tomade tierra con resistencias de 229 ohmios.

### (3) Conecta uno de los contactos del iterruptor de inclinacíon a la toma de 5V.Conecta el otro a una resistencia de 10 kilohm conectada a tierra. Conecta el punto de uníon donde se cruzan a la clavija digital 8

### THE CODE

El código está aquí: [Enlace](https://github.com/VitasB/Arduino/blob/main/reloj%20de%20arena%20digital.ino)

```C++
const int switchPin = 8;
unsigned long previousTime = 0;
int switchState =0;
int prevSwitchState =0;
int led = 2;
long interval = 2000;
void setup() {
  for(int x =2;x<8;x++){
    pinMode(x, OUTPUT);
  }
  pinMode(switchPin,INPUT);
}
void loop(){
  unsigned long currentTime= millis();
  if(currentTime - previousTime > interval){
    previousTime = currentTime;
digitalWrite(led, HIGH);
led++;
if(led ==7){
   }
}
switchState = digitalRead(switchPin);
if(switchState !=prevSwitchState){
  for(int x =2;x<8;x++){
    digitalWrite(x,LOW);
  }
led = 2;
previousTime = currentTime;
}
prevSwitchState = switchState;
}
```

## USE

Una vez que hayas programado el potoboard, comprueba la hora en un reloj. Cuando hayan pasando 10 minutos, el primer Led debería habarse encendido. Cada 10 minutos después de eso, se encenderá una luz nueva. Al final de la hora, las seis luces deberían estar todas encendidas.Cuando le des la vvuelta al protoboard, y hagas que el interruptor de inclinanción cambie de estado, las luces se apagarán y el temporizador se reiniciará.

### DON'T FORGET ABOUT IT

Cuando el reloj llega a la hora y las seis lucec están todas encendidas, simplemente se quedan encendidas. ¿Porías pensar en alguna manera de llamar tu atencón cuando haya pasado la hora? Tanto el sonido como el parpadeo de las luces serían buenos indicadores. A través de la variable led puedes comprobar si todas las luces están encendidas, y este es un buen lugar para llamar la atención de alguien.

### Para medir la duración de tiempo entre eventos, usa la función millis(). Ya que los números que ésta genera son mayores de los que puedas almacenar en un int, deberías usar el tipo de datos largo sin signo para almacenar sus valores.

