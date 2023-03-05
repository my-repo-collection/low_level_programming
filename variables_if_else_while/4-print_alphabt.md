Como resolví este ejercicio paso a paso:

En este ejercicio tenemos que imprimir todas las letras el alfabeto en minusclas omitiendo las letras 'e' y 'q'.

1. Comezamos con la declaración de la función principal, 'int main (void)' que como ya sabemos es el punto de entrada del programa.

2. Definimos la variable 'char letter' -la vamos a necesitar para almacenar cada letra del alfabeto.

3. Utilizamos un ciclo 'for' para recorrer todas las letras del alfabeto. El ciclo 'for' comienza con una letra 'a' y continúa hasta llegar a la letra 'z'. En cada iteración del ciclo, la variable letter se actualiza para contener la siguiente letra del alfabeto.

4. luego viene la sentencia 'if' que es muy util cuando queremos *evaluar* si la letra actual es una 'e' o una 'q'. - Si la letra actual es una 'e' o una 'q', entonces el programa continúa con la siguiente iteración del ciclo for, omitiendo la letra actual.

5. Si la letra actual no es una 'e' ni una 'q', entonces se imprime la letra en la pantalla utilizando la función 'putchar'. La función 'putchar' espera un argumento de tipo 'int', que representa el carácter a imprimir. En este caso, el carácter es la letra actual del alfabeto, almacenada en la variable letter.

6. Al final del ciclo 'for', se imprime un salto de línea en la pantalla utilizando la función 'putchar'. El salto de línea es necesario para que las letras impresas estén en una línea separada de cualquier otra salida que pueda imprimirse después.

-una cosa que a veces cuesta entender es porque la funcion 'putchar' espera un argumento de tipo 'int' en lugar de 'char', la respuesta no es dificil de entender: hay que recordar que los caracteres en C se representan como [enteros en la tabla ASCII](https://donnierock.com/2012/03/16/programa-en-c-que-imprime-el-codigo-ascii-imprimir-letra-n-en-c-y-cpp/).


-----------------------
Creado por LoreCG ❤

con ayuda de 'Markdown Live Preview'


