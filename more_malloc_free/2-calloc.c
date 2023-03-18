#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements to allocate memory for
 * @size: size of each element
 *
 * Return: pointer to the allocated memory, NULL if nmemb or size is 0
 * or malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	p = ptr;
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (ptr);
}
