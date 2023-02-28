#include "main.h"

/**
 *  _puts - Prints a tring, followed by a new line, to stdout.
 *
 *  @str: Pointer to the string to be printed.
 *
 *  Return: void.
 */

void _puts(char *str)
{
	int i = 0;

	/* recorre la cadena mientras no llegue al final ('\0') */
	while (str[i] != '\0')
	{
		/* imprime cada caracter de la cadena */
		_putchar(str[i]);
		i++;
	}

	/* imprime una nueva linea al final de la cadena */
	_putchar('\n');
}
