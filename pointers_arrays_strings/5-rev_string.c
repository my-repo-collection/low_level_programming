#include "main.h"

/**
 * rev_string - reverses a tring.
 * @s: the string to be reversed.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char tmp;

	/*
	 * obtiene la longitud de la cadena
	 */
	while (s[len] != '\0')
		len++;

	/*
	 * intercambia caracteres en la cadena
	 */
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
