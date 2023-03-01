#include "main.h"

/**
 * _strlen - devuelve la longitud de una cadena
 * @s: puntero a la cadena de entrada
 *
 * Return: la longitud de la cadena
 */
int _strlen(char *s)
{
	int len = 0;

	/* incrementa la variable 'len' hasta que se llegue al final de la cadena */
	while (*s != '\0')
	{
		len++;
		s++;
	}

	/*devuelve la longitud de la cadena */
	return (len);
}
