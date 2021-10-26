# PROYECTO INTERFAZ NAVE


## Resumen

El LED verde permanecera encendido hasta que pulses el boton. Cuando el Arduino reciba una señal del botón, la luz verde se apagar y las otras 2 luces empezaran a parpadear.

## Introduccion teoria

Se conectan las Leds al protoboard, led verde a la clavija 3, leds rojas clavijas 4 y 5.

Colocas el botón a un lado de la corriente y el otro a la clavija digita 2 del Arduino. Tendremos que añadir una resistencia azul de 10k-ohm . Esta resistencia conecta la clavija a la toma de tierra cuando el interruptor está abierto, asi que lee LOW.


# Proceso de montaje

-Materiales necesarios: Leds, resistencias 220-ohm y 10 kiloohms, cables, boton.

-Circuito:

-Foto circuito:

Errores: Montando el arduino no funcionaban las LEDs por que etaban mal puestas las resistencias.

## Código

-Explicar  ""explicar codigo"":

La uncion setup () se ejecuta una vez, cuando el arduino esta cargado por primera vez, aqui es donde configuras las clavijas digitales para que sean de entrada o de salida usando la funcion llamada pinMode (). Las clavijas conectados a LEDs serán de OUTPUT, y la clavija del interruptor ser un INPUT.

loop () se ejecuta continuamente tras completarse setup (), loop () es donde vas a comprovar si hay voltaje en las entradas, y donde conectaras y desconectaras las salidas.

Para comprovar el nivel de voltaje se utiliza digitalRead ().

DigitalWrite lo que hara es que permita enviar 5V a una clavija de salida.




-Enlace al código utilizado

- Foto - Video - Funciona o no -

## Variaciones

# Añadir un botón por hawdred

Vamos a añadir un botón conectado al pin 3, de tal forma que solo cuando se pulse el Led3 se encendera, el resto del proyecto (hawdrer y softfware) es el mismo.

