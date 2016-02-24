# Historia

Desde que ascendió al poder, Julio César ha desarollado una leve paranoia (Aunque es una paranoia completamente justificada considerando que están conspirando para asesinarlo). Tiene miedo que intercepten los mensajes que manda a sus amigos, entonces ha decidido encriptarlos antes de enviarlos. Para encriptar sus mensajes el dictador usa lo que se llama un *Caesar cipher*. 

Un *Caesar cipher* está compuesto por tres cosas: Un mensaje, un valor de desplazamiento y un mensaje encriptado. La idea del cifrado es que cada letra en el mensaje original se desplaza por una cantidad fija, por ejemplo si el valor de desplazamiento es 3, A cambiaría a D, B a E, y Z a C. La siguiente imagen muestra esto:

<center>![Ejemplo del cifrado](caesar.png)</center>

El problema es que Julio César le encargo la encriptación a Brutus, y pues, Brutus está medio bruto. A la hora de hacer la encriptación a Brutus se le olvidó el valor de desplazamiento original, entonces en varias ocasiones desplazó el mensaje original usando el valor incorrecto. A pesar de esto, Julio César esta seguro de que Brutus no cometió un error muy grave, y que aunque se equivoque de vez en cuando, *el valor de desplazamiento más usado es el correcto*. Esto quiere decir que si se deplazan 5 caracteres con 2, pero 7 con 4, el valor de desplazamiento es 4. Si existe un empate en la cantidad máxima de veces que se usó un valor, Julio César esta seguro de que el valor correcto es el que sea menor. Como Julio César necesita mandar este mensaje urgenetemente te ha pedido que le ayudes a arreglar el error de Brutus encontrando el valor de desplazamiento correcto y luego encriptando el mensaje original.

# Problema

Dado un mensaje original y un mensaje encriptado por Brutus, ayuda a Julio César a encontrar el valor de desplazamiento. Después encripta el mensaje original.

# Entrada

* Línea 1: Un entero $L$, la longitud del mensaje original y el mensaje encriptado.

* Línea 2: El mensaje original $M_o$

* Línea 3: El mensaje encriptado por Brutus $M_b$

# Salida

* Línea 1: El valor de desplazamiento correcto.

* Línea 2: El mensaje original correctamente encriptado.

# Ejemplo

### Entrada

16
JULIOCESARDABEST
WHYVCPRDNERRORNA

### Salida

13
WHYVBPRFNEQNORFG

## Límites

* $ 1 \le L \le 100000 $
* Cada letra del mensaje es una letra mayuscula del alfabeto inglés.

**Subtarea 1: 10 Puntos**

* El mensaje de Brutus no tiene errores.

**Subtarea 1: 20 Puntos**

* Cada caracter de $M_o$ sera menor alfabeticamente que su caracter respectivo de $M_b$.

**Subtarea 3: 70 Puntos**

* $ 1 \le L \le 100000 $
