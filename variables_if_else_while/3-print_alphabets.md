Como resolví este ejercicio paso a paso:

1. Comenzamos por entender los requerimientos de la tarea: necesitamos escribir un programa que imprima el alfabeto en minúsculas, luego en mayúsculas, seguido de una nueva línea. Solo podemos usar la función putchar, y solo podemos usarla tres veces.

2. Para imprimir el alfabeto en minúsculas, podemos usar un [bucle for](https://www.tutorialspoint.com/cprogramming/c_for_loop.htm) que itere sobre los caracteres 'a' a 'z', imprimiendo cada carácter usando putchar.

3. Para imprimir el alfabeto en mayúsculas, podemos usar otro [bucle for](https://www.tutorialspoint.com/cprogramming/c_for_loop.htm) que itere sobre los caracteres 'A' a 'Z', imprimiendo cada carácter usando putchar.

4. Luego podemos imprimir un carácter de nueva línea usando [putchar](https://www.tutorialspoint.com/c_standard_library/c_function_putchar.htm) para crear una nueva línea.

5. Necesitamos asegurarnos de usar la función putchar exactamente tres veces, por lo que necesitaremos encontrar una manera de combinar los dos bucles for en un solo bucle que solo use putchar tres veces.

6. Una forma de hacer esto es usar un solo bucle for que itere sobre los caracteres 'a' a 'Z', imprimiendo cada carácter usando putchar. Dentro del bucle for, podemos usar una declaración [if](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm) para verificar si el carácter actual es una letra minúscula o mayúscula, e imprimirlo en consecuencia.

7. Podemos usar [las funciones islower e isupper de la biblioteca ctype.h](https://cplusplus.com/reference/cctype/) para verificar si un carácter es una letra minúscula o mayúscula, respectivamente.

8. Una vez que hayamos escrito el programa, ya podemos compilarlo y ejecutarlo para asegurarnos de que funcione como se espera.


-----------------------
Creado por LoreCG ❤

con ayuda de 'Markdown Live Preview'
