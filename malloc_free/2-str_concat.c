#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = s1 ? strlen(s1) : 0;
	size_t len2 = s2 ? strlen(s2) : 0;
	char *concat = malloc(len1 + len2 + 1);

	if (concat == NULL)
		return (NULL);

	if (s1)
		strcpy(concat, s1);
	if (s2)
		strcat(concat, s2);

	return (concat);
}
