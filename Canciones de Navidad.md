### Trabajo en Adruino

Hoy hemos estudiado y creado una Melodía de Año Nuevo. En el programa Arduino, escribimos "Codificación" para la tarjeta Adruino.

Es muy importante saber qué antes de crear una melodía. Debe asegurarse de que el código que escribió se haya escrito correctamente y sin errores. De lo contrario, la melodía no funcionará o funcionará pero no correctamente.

### CODIGOS Y TODO MI TRABAJO (DE HOY)

# Tocar Melodias

El dia de hoy aprendimos a progamar el arduino de tal manera que pueda tocar una melodia y tambien le aplicamos un kill switch.

Aqui el codigo para poder todar una melodia.

```C++
int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
const int buttonPin=6;
const int pinAltavoz = 8;
const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50};
const int duracionNegra = 667;

 
void setup() {
  
  
   pinMode(buttonPin, INPUT);
}


void loop(){
    checkButton();
 if (play) {
   tocarMelodia();
  }

}

void tocarMelodia(){
  tocarNota(1,0.5);
  tocarNota(3,2);
  tocarNota(-1,1);
}

void tocarNota(int numeroNota, float duracionNota){
  int pin = pinAltavoz;
  int duracionMilisegundos = duracionNegra * duracionNota;
  
  if (numeroNota == -1){
    noTone(pin);
    delay(duracionMilisegundos);
    
  }
  else { 
   
  int frecuencia = freqs[numeroNota];
  tone(pin,frecuencia,duracionMilisegundos);
  delay(duracionMilisegundos);
  }
}

void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
```

Lo que hicimos fue tomar el codigo de kill switch y agregar primero el pin del altavoz que en este caso sera el pin 8.

Luego pusimos las frecuncias de las notas que las sacamos del [Fab Academy de David Prieto](http://fabacademy.org/2020/labs/barcelona/students/david-prieto/) y 
añadimos la nota de la negra que es 667.

luego hicimos un void tocarNota que es donde vamos añadir las notas que queremos tocar en nuestra melodia.

Y tambien hicimos un void tocarMelodia que funciona para que tocarNota sepa que nota tocar y cuanto tiene que durar.

## Villancico

Ahora vamos a poner un villancico para que suene con el arduino.

Primero vamos a buscar la melodia del villancico que en este caso sera 25 de dicimbre.

Aqui la melodia:

![](https://4.bp.blogspot.com/-naKk7_FrXng/WeIqAFpZiKI/AAAAAAAAHWE/RSOv-edEooowfWCQi6khzqYi5rDjK1C6ACLcBGAs/s1600/25%2Bde%2BDiciembre%2BPartitura%2Bcon%2Bnotas%2Ben%2Bclave%2Bde%2Bsol%2BFum%2BFum%2BFum%2BVillancicos.JPG)

Ahora tenemos que traducir esto para nuestro arduino segun la frecuencia de notas que tenmos en el const int freqs[] siendo la primera el numero 0.

Este seria el numeor de cada nota 
```
0 = Do

1 = Re

2 = Mi

3 = Fa

4 = Sol 

5 = La

6 = Si

16 = Sol sostenido 
```

En en el caso de 25 de dicimbre se unsa el sol sostenido la cual en nuestras notas no esta asi que la añadi de ultima y seria el numero 16.

Ahora en el void tocar melodia vamos ayadir todas las notas con tocarNota(Numero de nota,duracion de nota)

Para saber el tiempo de cada nota vamos a usar la melodia aqui podemos ver cuando duraria cada una:

![](https://musicateoria.files.wordpress.com/2011/03/figuras-musicales.jpg)

y si la nota tine un punto a su lado tendriamos que multiplicar la duracion de la nota por 1,5 y el resultado serial la duracion de esa nota.

### Error en el codigo 

En el codigo tuvimos un error con el kill switch y tuvimos que cambiarlo.

Aqui el codigo modificado:

```c++
int switchStateKill = 0;
bool isTheButtonBeingPressed = false;
bool play = false;
const int buttonPin=6;
const int pinAltavoz = 8;
const int freqs[] = {261.63, 293.66, 329.63, 349.23, 392, 440, 466.16, 523.25, 587.33, 587.33, 659.25,698.46, 783.99, 880, 932.33, 1046.50, 415.305};
const int duracionNegra = 667;

 
void setup() {
  
  
   pinMode(buttonPin, INPUT);
}


void loop(){

   tocarMelodia();


}

void tocarMelodia(){
tocarNota(5,0.75);
tocarNota(16,0.25);
tocarNota(5,0.5);
tocarNota(0,0.5);
tocarNota(6,0.5);
tocarNota(5,0.5);
tocarNota(16,0.5);
tocarNota(2,0.5);
tocarNota(5,1);
tocarNota(16,1);
tocarNota(5,1);
tocarNota(-1,1);
tocarNota(5,0.75);
tocarNota(16,0.25);
tocarNota(5,0.5);
tocarNota(0,0.5);
tocarNota(6,0.5);
tocarNota(5,0.5);
tocarNota(16,0.5);
tocarNota(2,0.5);
tocarNota(5,1);
tocarNota(16,1);
tocarNota(5,1);
tocarNota(-1,0.5);
}

void tocarNota(int numeroNota, float duracionNota){
 checkButton();
 if (play) {
    int pin = pinAltavoz;
  int duracionMilisegundos = duracionNegra * duracionNota;
  
  if (numeroNota == -1){
    noTone(pin);
    delay(duracionMilisegundos);
    
  }
  else { 
   
  int frecuencia = freqs[numeroNota];
  tone(pin,frecuencia,duracionMilisegundos);
  delay(duracionMilisegundos);
  }
 }

}

void checkButton(){
  switchStateKill = digitalRead(buttonPin);
  if (switchStateKill == HIGH){
    if (isTheButtonBeingPressed == false){
      play = !play;
      isTheButtonBeingPressed = true;
  }
}
else{
  isTheButtonBeingPressed = false;
}
}
```

Escribiré esto en inglés porque no sé cómo se escribe en español.

*Esto es*

What we did was move the checkButton (); and the if (play) of the void lood to the void touchNote and the function that made the note touch we put it inside the if (play) and thus we would solve the problem of the kill switch.

Tomé parte de la documentación de mi amigo Miguel Angel.
!https://github.com/miguelamgel1107/Arduino/edit/main/Tocarmelodia.md

Eso es todo para mi. Buen pasatiempo a todos!
