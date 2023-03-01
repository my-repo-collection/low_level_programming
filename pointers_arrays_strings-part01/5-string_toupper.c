/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: a pointer to the string to be modified
 *
 * Return: a pointer to be modified string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return(s);
}
