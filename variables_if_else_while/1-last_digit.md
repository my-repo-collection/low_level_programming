

### 1-last_digit


* Aqui hay que completar un programa que imprima el ultimo digito del numero aleatorio almacenado en la variable "n".

* El numero aleatorio es generado por la funcion "rand()" y la variable "n" es inicializada con este valor.

* Luego hay que obtener el último dígito del número almacenado en "n" y mostrarlo por pantalla en un formato específico que incluya un mensaje y la información del último dígito obtenido.

* La salida debe ser como se muestra en el enunciado del ejercicio.

```

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print the last digit of n
* Return: 0
*/

int main(void)
{
int n, last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;

if (last > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
else if (last != 0 && last < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, last);
}
return (0);
}

```


* Importación de librerías:
Se importan las librerías stdio.h, time.h y stdlib.h, que proporcionan funciones para imprimir por pantalla, generar números aleatorios y realizar operaciones de conversión de tipos, entre otras cosas.

* Declaración de variables:
Se declaran dos variables enteras "n" y "last". La variable "n" se utiliza para almacenar un número aleatorio generado por la función rand(), y la variable "last" se utiliza para almacenar el último dígito de "n".

* Generación del número aleatorio:
La función srand() se utiliza para inicializar la semilla del generador de números aleatorios, y se utiliza como argumento el valor de la función time(0), que devuelve la hora actual del sistema en segundos. De esta manera, se asegura que el número aleatorio generado sea diferente en cada ejecución del programa. Después, se genera un número aleatorio con la función rand() y se le resta la mitad del valor máximo posible generado por RAND_MAX, para que el número aleatorio generado esté en el rango deseado (-5 a 5).

* Cálculo del último dígito:
El último dígito de "n" se calcula utilizando la operación módulo (%), que devuelve el resto de la división entre "n" y 10.

* Condiciones:
Se establecen 3 condiciones utilizando la estructura if-else if-else    
    -Si el último dígito de "n" es mayor que 5, se imprime por pantalla     un mensaje indicando que el último dígito es mayor que 5. 
    
    -Si el último dígito de "n" no es cero y es menor que 6, se imprime por pantalla un mensaje indicando que el último dígito es menor que 6 y distinto de cero. 
    
    -Si el último dígito de "n" es cero, se imprime por pantalla un mensaje indicando que el último dígito es cero.

* Retorno de valor:
Finalmente, el programa retorna el valor 0, indicando que la ejecución ha sido exitosa.


----

```


```


---------------------
Creado por LoreCG ❤

Con ayuda de 'Markdown Live Preview'
