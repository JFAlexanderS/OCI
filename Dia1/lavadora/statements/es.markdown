# Historia

Karel, como todo buen hombre de familia, está haciendo la lavandería de sus Karelitos y de su amada esposa, Karen. Como ya lo van a retirar en la OMI, le acaban de dar su pensión, y con esto logró comprar 3 máquinas diferentes: una lavadora, una secadora, y una plancha. Lo mágico de estas máquinas es que son completamente automáticas, por lo que Karel puede usar todas las máquinas al mismo tiempo, siempre y cuando cada una esté trabajando con una prenda diferente. Lo malo es que cada máquina sólo toma una prenda a la vez, y que Karel tiene que procesar las prendas en orden. Primero lava, después seca y al final plancha (no puede hacer algo como secar una prenda antes de lavarla). 

Cada máquina hace su trabajo en cierto tiempo, el cual se encuentra representado por zumbadores en el mundo. El tiempo que tarda la lavadora para lavar una prenda está en la posición (1,2), el tiempo que tarda la secadora está en la posición (1,3), y el tiempo de la plancha está en la posición (1,4). 

Como Karel tiene una familia muy grande, tiene un montón de ropa en la posición (1,1), representada por zumbadores. Cada zumbador representa una prenda de ropa que Karel tiene que lavar, secar y planchar. 

Considerando que cada máquina solo puede procesar una prenda a la vez, y que pueden trabajar al mismo tiempo, ayuda a Karel a saber cuánto tiempo le tomarà hacer la lavandería.

# Problema

Encuentra la cantidad de tiempo que Karel va a pasar haciendo la lavandería y deja el resultado en la posición (1,5).

# Consideraciones

* Karel siempre inicia en la posición (1,1) orientado hacia el este.
* Karel tiene zumbadores infinitos en su mochila.
* Nunca habrán más de 100 prendas de vestir.
* Los únicos zumbadores del mundo son aquellos en las posiciones (1,1), (1,2), (1,3) y (1,4).
* No importa la orientación ni la posición final de Karel.
* Solamente importa la cantidad de zumbadores que hay en la posición (1,5); el estado de las otras posiciones no importa.
* No hay paredes en el mundo.

# Subtareas

* **Subtarea 1 [30 puntos]:** Karel nunca lava más de una prenda.

* **Subtarea 2 [70 puntos]:** La cantidad de prendas que lava Karel siempre es menor a 100.

# Ejemplo

### Entrada

<center>![Ejemplo de entrada](input_ejemplo.png)</center>

### Salida

<center>![Ejemplo de salida](output_ejemplo.png)</center>
