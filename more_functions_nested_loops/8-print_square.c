#include "main.h"

/**
 * print_square - Print a traight line in the therminal.
 * @size: square size.
 */

void print_square(int size)
{
	int rows, columns;

	if (size <= 0)
		_putchar('\n');

	for (rows = size; rows > 0; rows--)
	{
	for (columns = size ; columns > 0; columns--)
		_putchar('#');
		_putchar('\n');
	}
}
