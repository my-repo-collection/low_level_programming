### 2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game


* Aqui hay que escribir un programa que imprima el alfabeto en minúsculas, seguido de un salto de línea. 

* Solo se puede usar la función putchar y no se puede usar ninguna otra función (como printf, puts, etc.) 

* Solo se puede usar putchar dos veces.


```

#include <stdio.h>

/**
* main - Prints the alphabet in lower case.
* Return: 0
*/

int main(void)
{
char letra;

for (letra = 'a' ; letra <= 'z' ; letra++)
{
putchar(letra);
}
putchar(10);
return (0);
}

```


* Este programa escribe en la pantalla las letras del alfabeto en minúscula, seguidas de un salto de línea. 

* Para hacerlo, utiliza una estructura de bucle llamada "for" que va desde la letra "a" hasta la letra "z". 

* En cada iteración del bucle, la variable "letra" toma el valor de la siguiente letra del alfabeto y la imprime en la pantalla usando la función "putchar". 

* Después de imprimir todas las letras, se imprime un salto de línea en la pantalla y el programa termina.


----

```


```


---------------------
Creado por LoreCG ❤

Con ayuda de 'Markdown Live Preview'
