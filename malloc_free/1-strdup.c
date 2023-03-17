#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string using malloc
 * @str: pointer to string to duplicate
 *
 * Return: pointer to newly allocated string,
 * or NULL if allocation fails or str is NULL
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup = malloc(len + 1);

	if (dup == NULL)
		return (NULL);

	return (strcpy(dup, str));
}
