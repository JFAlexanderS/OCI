# Historia

Karel ha estado programando en C++ recientemente y tiene mil celos porque los arboles binarios no se usan en el mundo de Karel. Para remediar esto, Karel ha decidio construir su propio arbol binario perfecto con paredes. Ahora, como Karel es cool (y necesita tu ayuda), te va a explicar que es un arbol binario.

Un arbol es una estructura hecha de nodos, donde cada nodo tiene maximo dos hijos. Si sigues teniendo dudas, un arbol binario se ve asi:
<center>![Arbol binario normal](normal_binary.gif)</center>

Para nuestro problema, los *hijos* de un nodo $N$ se definen como los nodos que estan “abajo” de ese nodo en la estructura del arbol y conectados a $N$. El *padre* de un nodo $N$ se define como el nodo que esta “arriba” en la estructura del arbol y conectado a $N$ (e.g en el caso del nodo 2 del arbol de la imagen, su padre es el nodo 1 y sus hijos son los nodos 4 y 5). 
Fun fact: Se le llama *hojas* a los nodos que no tienen hijos

Ahora, el arbol binario que quiere construir Karel tiene propiedades especiales. Un arbol binario perfecto es aquel cuyos nodos nodos siempre tienen 0 hijos o 2 hijos, y donde cada hoja tiene la misma profundidad (la distancia hacia el nodo 1).
Asi se ve un arbol binario perfecto:
<center>![Arbol binario perfecto](full_binary.jpg)</center>

Y todo esto viene a la forma de representar arboles binarios en Karel. Ahora, normalmente un arbol binario en Karel se veria asi:
<center>![Arbol binario Karel paredes](karel_binary.png)</center>
Un nodo se define como un bloque de casillas delimitado por paredes, sus hijos son los dos bloques directamente debajo de el, y su padre es el bloque directamente arriba de el. El problema es que es imposible moverse en un arbol asi, entonces para cada nodo que no sea una hoja, Karel derrumbo las paredes horizontales en los extremos de la derecha y de la izquierda. Ahora, el arbol binaro se ve asi:
<center>![Arbol binario Karel paredes legit](karel_binary_legit.png)</center>

Ahora, Karel no te explico todo esto para nada. Ya tiene su arbol binario perfecto, y en cada hoja del arbol ha puesto cierta cantidad de zumbadores. Karel quiere que encuentres la suma de todos los zumbadores que se encuentran en las hojas del arbol.

# Problema

Encuentra la suma de todos los zumadores en las hojas del arbol binario perfecto de Karel y dejalos en la casilla donde inicio. 

# Consideraciones

* Karel siempre va a inciar en la casilla del extremo izquierdo del nodo mas hacia el norte, y estará viendo hacia el sur. 
* El arbol binario siempre sera un arbol binario perfecto.
* No hay zumbadores en el mundo que no esten en las hojas.
* No importa la orientacion ni la posicion final de Karel.
* Las unicas paredes del mundo son las que delimitan el arbol binario.
* Los arboles binarios pueden tener tamanos diferentes (e.g. puede haber un arbol de altura 5, como en el caso de ejemplo, y/o uno de altura 7)
* Hay zumbadores en todas las hojas del arbol.

# Subtareas

* **Subtarea 1 [50 puntos]:** Karel no tiene zumbadores en su mochila.

* **Subtarea 2 [50 puntos]:** Karel tiene zumbadores infinitos en su mochila.

# Ejemplo

### Entrada

<center>![Ejemplo de entrada](input_ejemplo.png)</center>

### Salida

<center>![Ejemplo de salida](output_ejemplo.png)</center>
