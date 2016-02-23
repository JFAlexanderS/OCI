# Historia

Karel ha estado programando en C++ recientemente y tiene mil celos porque los árboles binarios no se usan en el mundo de Karel. Para remediar esto, Karel ha decidio construir su propio árbol binario perfecto con paredes. Ahora, como Karel es cool (y necesita tu ayuda), te va a explicar que es un árbol binario.

Un árbol es una estructura hecha de nodos, donde cada nodo tiene máximo dos hijos. Un árbol binario se puede ver así:
<center>![Arbol binario normal](normal_binary.gif)</center>

Para nuestro problema, los *hijos* de un nodo $N$ se definen como los nodos que estan “abajo” de ese nodo en la estructura del arbol y conectados a $N$. El *padre* de un nodo $N$ se define como el nodo que esta “arriba” en la estructura del arbol y conectado a $N$ (e.g en el caso del nodo 2 del arbol de la imagen, su padre es el nodo 1 y sus hijos son los nodos 4 y 5). 
Fun fact: Se le llama *hojas* a los nodos que no tienen hijos

Ahora, el árbol binario que quiere construir Karel tiene propiedades especiales. Un árbol binario perfecto es aquel cuyos nodos siempre tienen 0 hijos o 2 hijos, y donde cada hoja tiene la misma profundidad (la distancia hacia el nodo 1).
Asi se ve un árbol binario perfecto:
<center>![Arbol binario perfecto](full_binary.jpg)</center>

Y todo esto viene a la forma de representar árboles binarios en Karel. Ahora, normalmente un árbol binario en Karel se vería asi:
<center>![Arbol binario Karel paredes](karel_binary.png)</center>

Un nodo se representa como un bloque de casillas delimitado por paredes, sus hijos son los dos bloques directamente debajo de él, y su padre es el bloque directamente arriba de él. El problema es que es imposible moverse en un arbol así, entonces para cada nodo que no sea una hoja, Karel derrumbó las paredes horizontales en los extremos de la derecha y de la izquierda. Ahora, el árbol binaro se ve así:
<center>![Arbol binario Karel paredes legit](karel_binary_legit.png)</center>

Ahora, Karel no te explicó todo esto para nada. Ya tiene su árbol binario perfecto, y en cada hoja del árbol ha puesto cierta cantidad de zumbadores. Karel quiere que encuentres la suma de todos los zumbadores que se encuentran en las hojas del árbol.

# Problema

Encuentra la suma de todos los zumadores en las hojas del árbol binario perfecto de Karel y dejalos en la casilla donde inició. 

# Consideraciones

* Karel siempre va a inciar en la casilla del extremo izquierdo del nodo mas hacia el norte, y estará viendo hacia el sur. 
* El arbol binario siempre será un árbol binario perfecto.
* No hay zumbadores en el mundo que no estén en las hojas.
* No importa la orientacion ni la posición final de Karel.
* Las unicas paredes del mundo son las que delimitan el árbol binario.
* Los árboles binarios pueden tener tamaños diferentes (e.g. puede haber un árbol de altura 5, como en el caso de ejemplo, y/o uno de altura 7)
* Hay zumbadores en todas las hojas del árbol.

# Subtareas

* **Subtarea 1 [50 puntos]:** Karel no tiene zumbadores en su mochila.

* **Subtarea 2 [50 puntos]:** Karel tiene zumbadores infinitos en su mochila.

# Ejemplo

### Entrada

<center>![Ejemplo de entrada](input_ejemplo.png)</center>

### Salida

<center>![Ejemplo de salida](output_ejemplo.png)</center>
