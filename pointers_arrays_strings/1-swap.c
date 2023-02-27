#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	/* guarda el valor apuntado por a en temp */
	temp = *a;

	/* guarda el valor apuntado por b en la ubicacion de memoria */
	*a = *b;

	/* guarda el valor de temp en la ubicacion de memoria a la que apunta b */
	*b = temp;
}
