#include <ctype.h>
#include <string.h>

/**
 * cap_tring - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to modified string
 */
char *cap_string(char *str)
{
	int i, len;

	len = strlen(str);

	if (len > 0 && islower(str[0]))
		str[0] = toupper(str[0]);

	for (i = 1; i < len; i++)
	{
		if (islower(str[i]))
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'
					|| str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.'
					|| str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"'
					|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
					|| str[i - 1] == '}')
			{
				str[i] = toupper(str[i]);
			}
		}
	}

	return str;
}
