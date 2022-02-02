## Resumen

Para empezar, en este proyecto se necesita: Cables, Un Led, una resistencia de 220 Ohmios, Resistencia de 1 MegOhmios y trozo de papel de aluminio.

También tendríamos que instalar la librería de CapacitiveSensor de Paul Stoffregen. 

Para hacerlo tendríamos que ir a la pestaña de Herramientas en Arduino, ya allí, nos vamos a Administrar Biblioteca, lo cual nos debería abrir una pequeña ventana llamada "Gestor de Librerías". En esa ventana, nos vamos al buscador, que se encuentra en la esquina de superior del lado derecho, y procedemos a buscar Capacitive Sensor. Nos debería salir en primer lugar "CapacitiveSensor by Paul Stoffregen", seleccionamos con el ratón y, en la esquina inferior derecha debería aparacer la opción de instalar, le damos clic y ya tendríamos instalada la librería CapacitiveSensor.

Esta librería sirve para medir la capacidad eléctrica de tu cuerpo, lo que nos ayudará a encender el Led.

Con todo lo anterior ya podríamos empezar.

La librería CapacitiveSensor comprueba dos clavijas en nuestra protoboard (una de ellas es un emisor y la otra es un receptor), y mide cuanto tiempo tardan en tener el mismo estado. Estás se conectarán al papel de aluminio, y gracias a la electricidad de nuestro cuerpo haremos que, al tocar el papel de aluminio ambas clavijas tarden más tiempo en llegar al mismo estado.


## Código

Aquí está el código de este proyecto:

```
#include <CapacitiveSensor.h>
CapacitiveSensor capSensor = CapacitiveSensor(4,2);
int threshold = 1000;
const int ledPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
void loop() {
  long sensorValue = capSensor.capacitiveSensor(30);
  Serial.println(sensorValue);
  if(sensorValue > threshold) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
  delay(10);
}

```
