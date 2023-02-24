#include "main.h"

/**
 * print_line - Print a straight line in the terminal.
 * @n: numbers of lines.
 * Return: void function.
 */

void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
