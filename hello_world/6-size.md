### 5. 6. Size is not grandeur, and territory does not make a nation

* El enunciado del task en cuestión es el siguiente:

Escribe un programa en C que imprima el tamaño de varios tipos de datos en bytes en el sistema donde se compila y ejecuta. El programa debe imprimir el tamaño de los siguientes tipos de datos:

    -char
    -int
    -long int
    -long long int
    -float

* Además, se pide que el programa produzca el mismo resultado que se muestra en el ejemplo proporcionado en el enunciado. El ejemplo muestra la salida del programa para dos compilaciones diferentes: una para una arquitectura de 32 bits y otra para una de 64 bits.

* Al final, el programa debe devolver un valor de 0 como indicador de éxito al sistema operativo.

* Entonces, la tarea consiste en *escribir un programa en C que muestre el tamaño en bytes de varios tipos de datos en el sistema donde se compila y ejecuta*, y que produzca la misma salida que se muestra en el ejemplo proporcionado.

```

#include <stdio.h>

/**
* main - Print the size of various types
* Return: 0
*/

int main(void)<br>
{<br>
printf("Size of a char: %d byte(s)\n", sizeof(char));<br>
printf("Size of an int: %d byte(s)\n", sizeof(int));<br>
printf("Size of a long int: %d byte(s)\n", sizeof(long int));<br>
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));<br>
printf("Size of a float: %d byte(s)\n", sizeof(float));<br>
return (0);<br>
}<br>

```

* Incluimos la biblioteca de entrada y salida estándar stdio.h, que nos permite usar la función printf() para imprimir el resultado en la salida estándar.

* Definimos la función principal main(), que es el punto de entrada del programa.

Dentro de main(), usamos la función printf() para imprimir el tamaño en bytes de cada tipo de datos que queremos analizar.

* Usamos el operador sizeof para obtener el tamaño en bytes de cada tipo de datos y lo pasamos como argumento a la función printf(). IMPORTANT -usamos el especificador de formato %lu para imprimir el resultado como un número entero sin signo de tipo long unsigned int.

* Finalmente, devolvemos un valor de 0 como indicador de éxito al sistema operativo.

--------------------
Creado por LoreCG 

Con ayuda de 'Markdown Live Preview'
