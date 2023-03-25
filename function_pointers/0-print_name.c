#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a given printing function.
 * @name: The name to print.
 * @f: A pointer to the function to use to print the name.
 *
 * Description: This function takes a name and a function pointer,
 * and calls the function with the name as an argument to print
 * the name using a specific format.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
