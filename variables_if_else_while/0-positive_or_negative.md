

### 0-positive_or_negative


* En primer lugar, se incluye la biblioteca stdio.h, que proporciona las funciones básicas de entrada y salida. 
*A continuación, se incluye la biblioteca stdlib.h, que proporciona funciones para la gestión de la memoria dinámica, control de procesos y otras operaciones del sistema.

```

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if a random number is positive or negative
* Return: 0
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

```


* La función principal del programa es main(), que es el punto de entrada para cualquier programa en C. La función main() tiene un tipo de dato int, lo que significa que debe devolver un valor entero cuando termine.

* Dentro de la función main(), se declara la variable n como un entero y se utiliza la función srand() para inicializar el generador de números aleatorios. Luego, se utiliza la función rand() para generar un número aleatorio y se asigna a la variable n.

* A continuación, se utiliza una estructura de control de flujo if...else para determinar si el número almacenado en la variable n es positivo, negativo o cero. Si el número es mayor que cero, se imprime "is positive". Si el número es igual a cero, se imprime "is zero". Si el número es menor que cero, se imprime "is negative".

* Finalmente, se utiliza la función printf() para imprimir el número y el mensaje correspondiente. El carácter '\n' se utiliza para agregar una nueva línea después de la impresión.



----

```

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

```


-Son directivas del preprocesador que permiten al programa acceder a diferentes funciones y macros definidos en las bibliotecas estándar.

* stdlib.h: Esta biblioteca proporciona funciones para administrar la memoria dinámica, realizar operaciones aritméticas en enteros, generar números aleatorios, controlar el programa, entre otras cosas.

* time.h: Esta biblioteca proporciona funciones para trabajar con el tiempo y las fechas, como obtener la hora actual del sistema, convertir una fecha y hora en una representación de tiempo, etc.

* stdio.h: Esta biblioteca proporciona funciones para manejar entrada y salida estándar en C, como leer y escribir datos desde y hacia archivos, pantallas y otros dispositivos de entrada/salida.


--------------------
Creado por LoreCG ❤

Con ayuda de 'Markdown Live Preview'
