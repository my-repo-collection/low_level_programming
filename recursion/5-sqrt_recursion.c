#include "main.h"
#include <stdio.h>

/**
 * sqrt_recursion - calcula la raiz cuadrada de n
 * usando recursividad.
 * @n: el numero del que se calculara la raiz cuadrada
 * @x: la estimacion actual de la raiz cuadrada
 *
 * Return: la raiz cuadrada de n, o -1 si n no tiene
 * una raiz cuadrada natural.
 */
int sqrt_helper(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (sqrt_helper(n, x + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
