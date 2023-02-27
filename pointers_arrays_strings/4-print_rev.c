#include "main.h"

/**
 * print_rev - imprime una cadena de texto al reves,
 * seguida de una nueva linea.
 *
 * @s: la cadena de texto a imprimir.
 */
void print_rev(char *s)
{
	int len = 0;

	/*
	 * obtiene la longitud de la cadena de texto
	 */
	while (s[len] != '\0')
		len++;

	/*
	 * imprime la cadena de texto en orden inverso
	 */
	for (int i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	/*
	 * imprime un caracter de nueva linea para separar la salida
	 */
	_putchar('\n');
}
