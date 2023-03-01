#include "main.h"
#include <stdio.h>

/**
 * print_array - imprime n elementos de un array de enteros,
 * seguidos de una nueva linea
 * @a:puntero al array
 * @n:numero de elementos a imprimir
 */
void print_array(int *a, int n)
{
	int i;

	/*
	 * iteramos a traves de los
	 * primeros n elementos del array a
	 */
	for (i = 0; i < n; i++)
	{
		/*
		 * imprimimos el elemento actual con %d,
		 * que es el formato para enteros
		 */
		printf("%d", a[i]);

		/*
		 * si no es el ultimo elemento,
		 * imprimimos una coma y un espacio para
		 * separarlo del siguiente
		 */
		if (i != n - 1)
			printf(", ");
	}

	/*
	 * imprimimos una nueva linea al final para
	 * empezar una nueva linea despues de
	 * imprimir todos los elementos
	 */
	printf("\n");
}
