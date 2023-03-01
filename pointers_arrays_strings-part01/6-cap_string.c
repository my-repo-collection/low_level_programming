/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: pointer to capitalized string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';

		switch (s[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '\"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 'a' - 'A';
		}
		i++;
	}
	return (s);
}
