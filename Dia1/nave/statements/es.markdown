# Historia

¡Ayuda! Karel accidentalmente se extravió en una dimensión alterna con leyes de la física diferentes a la nuestra (Pero no le pregunten como, no le gusta hablar del incidente). Está volando en su nave sobre el planeta Flurgflagen, que tiene la propiedad especial de que todas las paredes del mundo son paredes verticales pegadas a la base del mundo, como las siguientes:

Ejemplos de paredes válidas:
<center>![Paredes validas](paredes_validas.png)</center>

Ejemplos de paredes inválidas:
<center>![Paredes invalidas](paredes_invalidas.png)</center>

Como extraña mucho a sus Karelitos, Karel está ansioso por regresar a casa, y para hacer esto usará su nave espacial. La nave viene con $U$ unidades de combustible, representadas por zumbadores en la mochila de Karel. Como Karel quiere llegar lo más pronto posible a casa, va a usar todo su combustible para rodear la base del mundo. 

El problema es que, como mencionamos antes, las leyes de la física no funcionan igual en este mundo. La diferencia aquí es que mientras más alto vuela Karel, más combustible tiene que gastar. En particular, la fuerza de gravedad $F_g$ aumenta por $G$ en cada fila del mundo. (e.g. en la fila 1:  $F_g=G$, en la fila 2: $F_g=2G$, en la fila 3:  $F_g=3G$, y así sucesivamente). Karel gasta $F_g$ unidades de combustible para moverse de una casilla con fuerza de gravedad $F_g$. 

Por ejemplo, si Karel quiere rodear la base de este mundo cuando $G=2$, usaría las siguientes cantidades de combustible en cada casilla:
<center>![Mundo G2](mundo_g2.png)</center>

Y si $G=5$, sería así:
<center>![Mundo G5](mundo_g5.png)</center>

Karel quiere saber hasta dónde va a llegar el combustible de su nave, y qué tanto combustible se va a gastar en cada posición del camino. Ayuda a Karel a regresar a casa y estará eternamente agradecido. 

# Problema

Escribe un programa que deje a Karel en la última casilla a la que puede llegar con su combustible, y marca el combustible usado en cada casilla del recorrido. 

# Consideraciones

* Karel siempre inicia en la posición (1,1) viendo hacia el este.
* El valor de $G$ se encuentra en la posición (3,1) representado por zumbadores. *Estos zumbadores no son parte del combustible.*  
* No hay zumbadores en el mundo aparte de los que están en la posición (3,1).
* No importa la orientación final de Karel.
* La cantidad de $U$ de combustible en la mochila de Karel siempre será la cantidad exacta para hacer el último movimiento. En particular, nunca se dará el caso donde hay suficiente combustible para viajar "media casilla", o cualquier otra cantidad fraccional. 
* En un programa correcto, Karel siempre termina con 0 zumbadores en su mochila. 
* Entre cada pared vertical siempre hay una distancia mayor o igual a 2 columnas.
* Karel nunca llegará a la fila 100 con su combustible. 

# Subtareas

* **Subtarea 1 [26 puntos]:** El único caso es el caso de ejemplo. 

* **Subtarea 2 [74 puntos]:** Se usarán una variedad de casos **argupados** para probar que el programa es correcto. 

# Ejemplo

### Entrada

**745 zumbadores en la mochila de Karel**

<center>![Ejemplo de entrada](input_ejemplo.png)</center>

### Salida


**0 zumbadores en la mochila de Karel**

<center>![Ejemplo de salida](output_ejemplo.png)</center>
