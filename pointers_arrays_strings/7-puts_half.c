#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the secnd half of a string
 * @str: the string ti print
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	/*
	 * obtain the length of the string
	 */
	while (*(str + len) != '\0')
		len++;

	/*
	 * calculate the number of characters to print
	 */
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	/*
	 * print the charcters
	 */
	for (i = n; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
