En este ejercicio se nos pide escribir un programa que imprima los numeros de la base 16 en minúsculas, seguidos de nua nueva línea (La base 16 es el sistema numérico hexadecimal, que utiliza 16 símbolos (0-9 y a-f) para representar números.)

1. Solo podemos usar 'putchar' para imprimir los caracteres y *no se puede usar 'printf' o 'puts'*.

2. Una forma de resolverlo es usando dos bucles 'for' para imprimir los números y las letras de la base 16.

3. En el primer bucle se imprimen los dígitos del 0 al 9 utilizando el valor ASCII correspondiente.

4. En el segundo bucle, podemos imprimir las letras de la 'a' a la 'f' utilizando el valor ASCII correspondiente.

Nota: Importante aclarar como funciona el tema del ASCII: En la mayoría de los sistemas informáticos modernos, la información se almacena y se transmite en forma de códigos numéricos. El código ASCII es uno de los sistemas más comunes para representar caracteres de texto. Cada caracter se asigna a un número decimal único en el rango de 0 a 127.

En C, podemos trabajar con los valores ASCII utilizando el tipo de dato 'char'. Al asignar un carácter a una variable de tipo char, en realidad estamos almacenando su valor ASCII correspondiente en la variable.

Ej: Por ejemplo, si asignamos el carácter 'A' a una variable de tipo char, en realidad estamos almacenando el valor decimal 65 (el valor ASCII de 'A') en la variable.

-----------------------
Creado por LoreCG ❤

con ayuda de 'Markdown Live Preview'


