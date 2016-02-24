# Historia

Con el propósito de definir su disputa de largo tiempo de quién es la vaca más rápida, Bessie y su amiga Elsie deciden hacer una carrera a través de la granja.

Las dos vacas comienzan en la misma posición y comienza a correr en la misma dirección al mismo tiempo. El progreso de cada vaca se describe por una serie 
de “segmentos”, durante cada uno de los cuales la vaca corre con una velocidad constante. Por ejemplo, Bessie podría correr con una velocidad de 5 durante 3 
unidades de tiempo, luego a una velocidad de 10 durante 6 unidades de tiempo. Bessie y Elsie corren la misma cantidad total de tiempo.

A las vacas les gustaría contar con su ayuda para contar el número de cambio de liderato durante la carrera. Un cambio de liderato sucede en un punto del 
tiempo cuando la vaca A va delante de la vaca B y hasta el último instante en que una vaca estaba delante de la otra, esa era la vaca B. Por ejemplo, si B va encabezando la carrera y luego A pasa a encabezarla, entonces era un cambio de liderato. Si B está encabezando la carrera y luego A empareja a B por algún tiempo y finalmente encabeza la carrera, entonces esto también cuenta como un cambio de liderato.

# Problema

Encuentra los cambio de liderato en la carrera de Bessie.

# Entrada

* Línea 1: Dos enteros separados por enteros, N y M. (1 <= N, M <= 1000)

* Líneas 2..1+N: Cada línea contiene uno de los N segmentos de la carrera de 
   Bessie, descrito por dos enteros: la velocidad de Bessie y la cantidad de 
   tiempo en que ella corre con esta velocidad (ambos enteros en el rango 
   1..1000).

* Líneas 2+N..1+N+M: Cada línea contiene uno de los M segmentos de la carrera 
   de Elsie, descrito por dos enteros: la velocidad de Elsie y la cantidad de 
   tiempo en que ella corre con esta velocidad (ambos enteros en el rango 
   1..1000).

# Salida

* Línea 1: El número de cambios de liderato durante la carrera.

# Ejemplo

### Entrada

4 3
1 2
4 1
1 1
2 10
2 3
1 2
3 9

### Salida

2

# Explicacion

Bessie corre con una velocidad de 1 por 2 unidades de tiempo, luego a una 
velocidad de 4 por 1 unidad de tiempo, luego a una velocidad de 1 por 1 unidad 
de tiempo y finalmente a una velocidad de 2 por 10 unidades de tiempo. Elsie 
corre con una velocidad de 2 por 3 unidades de tiempo, luego a una velocidad 
de 1 por 2 unidades de tiempo y finalmente a una velocidad de 3 por 9 unidades 
de tiempo.

Elsie encabeza la carrera hasta el tiempo t = 3, cuando ellas se encuentran 
después que ambas han recorrida 6 unidades en total de distancia y corrido 
juntas durante 1 unidad de tiempo. Bessie entonces toma la cabecera brevemente 
(el primer cambio de liderato), solamente para ser sobrepasada rápidamente 
después por Elsie (el segundo cambio en liderato). Elsie termina encabezando 
la carrera.
