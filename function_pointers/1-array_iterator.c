#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: the array to be processed
 * @size: the size of the array
 * @action: the function to be executed on each element of the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
