IF (Variable y valor fijo), Si (True), No (False)

Output -> Stiven actívate

EJEMPLO :

Temperatura (15 ºC - 80 ºC)

Sensor Value (0 - 1024)

Se puede encadenar infinitas veces

Leer Pinao -> Analog Read -> 0 - 1023 (8 bytes)

Transforma los valores y, de regalo, las pinta en pantalla.

Decidir

Digital Write es una función que nos pide un número de pin y el valor HIGH(1) o LOW(0). Si el valor es HIGH, la placa suministrará 5 Voltios en ese pin. Si el valor es LOW, la placa suministrará 0 voltios en ese pin. Si hay 5 voltios, se activarán los circuitos* Si es 0V no se activarán.

Depende del hardware y como esté conectado.

} else if ( temperature >= baselineTemp+2 && temperature < baselineTemp+4){

digitalWrite(2,HIGH),

digitalWrite(3,LOW),

digitalWrite(4,LOW),

} else if ( temperature >= baselineTemp+4 && temperature < baselineTemp+6){

digitalWrite(2,HIGH),

digitalWrite(3,HIGH),

digitalWrite(4,LOW),

} else if ( temperature >= baselineTemp+4)

digitalWrite(2,HIGH),

digitalWrite(3,HIGH),

digitalWrite(4,HIGH),
Arduino

    Vesion 1

Hemos comenzado copiando unos codigos en la pizzara de la version uno la cual seria esta en particular

Version 1 y principal

    Vesion 2

En la segunda verios hemos echo que 'parpadease siempre cuando le dabamos a un boton se encendia otro y al contrario.

Version 2

    Vesion 3

lo que hemos hecho en la version 3 es que siempre esten parpadeando sin parar y cuando le das a un boton se enciende uno y cuando le das ah otro se enciende otro

Version 3

    Vesion 4

En la version 4 Siempre estaban apagados y se encendian con cualquiera de losd os botones

version 4

    Vesion 5

En la version 5 siempre estan parpadeando permanentemente, cuando aprietas el boton que esta conectado al pin dos brilla el led del pin 4 y el otro led se apaga , cuando el boton que esta conectado al pin 3 se aprieta se enciende el led que esta conectado al pin 5 el otro led se apaga y si oprimes los dos botones los dos leds se mantienen encendidos

version 5

    Vesion 6

Usamos este operador (!) este sirve para hcaer la accion contraria de lo que se desea

version 6

los ejercicios actualmente completados resultaron ser muy parecidos en cuestión de programación por tener codigos muy similares (exactamente los mismos) epro con algunos ligeros cambios que hacían que el rsultado de cada ejercicio se totalmente distinto.
