# Historia

Karel, como todo buen hombre de familia, esta haciendo la lavanderia de sus Karelitos y de su amada esposa, Karen. Como ya lo van a retirar en la OMI, le acaban de dar su pension, y con esto logro comprar 3 maquinas diferentes, una lavadora, una secadora, y una planchadora. Lo magico de estas maquinas es que son completamente automaticas, entonces Karel puede estar lavando una prenda de vestir en lo que seca una prenda diferente. Lo malo es que cada maquina solo toma una prenda a la vez, y que tiene que procesar las prendas en orden (no puede hacer algo como secar una prenda antes de lavarla). 

Cada maquina hace su trabajo en cierto tiempo, el cual se encuentra representado por beepers en el mundo. El tiempo que tarda la lavadora para lavar una prenda esta en la posicion (1,2), el tiempo que tarda la secadora esta en la posicion (1,3), y el tiempo de la planchadora esta en la posicion (1,4). 

Como Karel tiene una familia muy grande, tiene un monton de ropa en la posicion (1,1), representada por beepers. Cada beeper representa una prenda de ropa que Karel tiene que lavar, secar y planchar. 

Considerando que cada maquina solo puede procesar una prenda a la vez, y que pueden trabajar al mismo tiempo, ayuda a Karel a saber cuanto tiempo le tomara hacer la lavanderia.

# Problema

Encuentra la cantidad de tiempo que Karel va a pasar haciendo la lavanderia y deja el resultado en la posicion (1,5).

# Consideraciones

* Karel siempre inicia en la posicion (1,1) orientado hacia el Este.
* Karel tiene zumbadores infinitos en su mochila.
* Nunca habran mas de 100 prendas de vestir.
* Los unicos zumbadores del mundo son aquellos en las posiciones (1,1), (1,2), (1,3) y (1,4).
* No importa la orientacion ni la posición final de Karel.
* Solamente importa la cantidad de beepers que hay en la posicion (1,5), el estado de las otras posiciones no importa.
* No hay paredes en el mundo.

# Subtareas

* **Subtarea 1 [30 puntos]:** Karel nunca lava mas de una prenda.

* **Subtarea 2 [70 puntos]:** Karel tiene zumbadores infinitos en su mochila.

# Ejemplo

### Entrada

<center>![Ejemplo de entrada](input_ejemplo.png)</center>

### Salida

<center>![Ejemplo de salida](output_ejemplo.png)</center>
