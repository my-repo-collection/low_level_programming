#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: integer to add
 * @b: integer to add
 * Return: result of addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: integer to subtract from
 * @b: integer to subtract
 * Return: result of subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: integer to multiply
 * @b: integer to multiply
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: integer to divide
 * @b: integer to divide by
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
