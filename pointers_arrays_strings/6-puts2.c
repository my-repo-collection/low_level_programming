#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed
 * by a new line.
 *
 * @str: The string to print.
 */
void puts2(char *str)
{
	int i;

	/*
	 * itera sobre los caracteres de la cadena
	 */
	for (i = 0; str[i] != '\0'; i += 2)
	{
		/*
		 * imprime el caracter actual
		 */
		_putchar(str[i]);
	}

	/*
	 * imprime un caracter de nueva linea al final
	 */
	_putchar('\n');
}
