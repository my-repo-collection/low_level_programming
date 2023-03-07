#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the integer to check
 *
 * Retunr: 1 if n is a prime number, 0 otherwhise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (is_prime_helper(n, 3));
}

int is_prime_helper(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d * d > n)
		return (1);
	return (is_prime_helper(n, d + 2));
}
