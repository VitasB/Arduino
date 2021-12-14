## INSTRUMENTO DE TECLADO

## 1

Conecta tu protoboard a corriente y a toma de tierra tal y como hiciste en los proyectos anteriores. Conecta un lado del piezo a la toma de tierra. Conecta el otro lado a la clavija 8 de tu Arduino.

## 2

Coloca tus iterruptores en el protoboard, tal y como se ve en el circuito. La distribucion de resistencias e interruptores alimentando una entrada analógica se llama una escalera de resistencia. A traves de resistencias de 220 Ohm, 10 kOhm y 1MegOhm, respectivamente.Conecta todas las salidas de los interruptores en un solo punto de union.

He montado el circuito del instrumento del teclado.

Para esta práctica necesitaremos:

    1 Buzzer
    4 botones
    2 resistencias de 10 kΩ
    1 resistencia de 220 Ω
    1 resistencia de 1 MΩ

En esta práctica, construiremos y programaremos un instrumento similar a un piano, es decir, un circuito que generará diferentes frecuencias según que botones (teclas) pulsemos.



### Codigo

 El código que usaremos será el siguiente:
 
```

int buttons[6];
//crea una lista con 6 elementos

buttons[0] == 2;
//le da a primer elemento el valor 2

int notes[] = {262,294,330,349};
//relaciona cada valor de la lista anterior con uno de esta

void setup(){
  Serial.begin(9600);
}

void loop(){

  int keyVal = analogRead(A0); 

//lee un valor entre 0 y 1024 dependiendo de qué botón está pulsado

  Serial.println(keyVal);
  
  if(keyVal ==1023){
    tone(8, notes[0]);
  }
  else if(keyVal >= 990 && keyVal <=1010){
    tone(8, notes[1]);
  }
  else if(keyVal <= 505 && keyVal <= 515){
    tone(8, notes[2]);
  }
  else if(keyVal >= 5 && keyVal <=10){
    tone(8, notes[3]);
  }
  else{
    noTone(8);
  }
}
/*



```

-Con estas últimas líneas de código, haremos que suene una nota según qué botón pulsemos, es decir, según qué valor de la lista este activo
*/


[CODIGO]()

