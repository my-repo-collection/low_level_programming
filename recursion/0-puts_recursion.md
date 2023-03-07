- En este ejercicio tenemos que implementar la función '_[puts_](https://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_function_puts_es.html)recursion' que imprime una cadena de caracteres de manera recursiva. 
- La función toma una cadena de caracteres como argumento y, en cada llamada recursiva, imprime el primer caracter de la cadena y luego llama a la función con el resto de la cadena (es decir, sin el primer caracter). 
- Esto se repite hasta que se llega al final de la cadena, momento en el que se imprime un caracter de salto de línea y se sale de la función.

💡 *Al llamar la función de manera recursiva con un argumento que es un puntero al siguiente caracter en la cadena, se logra imprimir cada caracter en la cadena hasta que se llega al final. El caso base es cuando se llega al final de la cadena, momento en el que se imprime un caracter de salto de línea y se sale de la función.*

💡 *La función auxiliar _putchar es utilizada para imprimir cada caracter de la cadena en la salida estándar. Esta función toma un caracter como argumento y lo imprime en la consola.*


-----
```
#include "main.h"

/**
 * _puts_recursion - Imprime una cadena seguida de un salto de línea utilizando la recursión.
 * @s: La cadena de caracteres a imprimir.
 */
void _puts_recursion(char *s)
{
    /* Caso base: Si el primer caracter es un caracter nulo, se llegó al final de la cadena */
    if (*s == '\0')
    {
        /* Imprimir un salto de línea para indicar el final de la cadena */
        _putchar('\n');
        return;
    }

    /* Imprimir el primer caracter de la cadena */
    _putchar(*s);

    /* Llamar a la función de manera recursiva con el resto de la cadena */
    _puts_recursion(s + 1);
}
```
----
#### vamos por partes:

Como siempre comenzamos con la cabecera 'main.h' que debería incluir la declaracion de la funcion _putchar

la función _puts_recursión toma una cadena de caracteres 's' como argumento y no devuelve nada (void).

lo primero es verificar si el primer caracter de la cadena 's' es un caracter nulo ('\0'). Si es asi, se ha llegado al final de la cadena y la función imprime un caracter de salto de línea ('\n') y retorna. Esto es el caso de la base de la recursión.

Si el primer caracter de la cadena no es un caracter nulo, la función imprime este caracter usando la función _putchar.

Despues la funcion se va a llamar a si misma de manera recursiva, pasando como argumento la direccion del siguiente caracter de la cadena ('s + 1').

y esto se va a repetir hasta que llega al final de la cadena, momento en el que se va a imprimir el salto de linea y la recursion se para ahí.

![flowchart](https://github.com/lorecarreno/img/blob/main/0-puts_recursion.c.jpg?raw=true)

----

Creado por LoreCG ❤

Y con ayuda de 'Markdown Live Preview'

------
