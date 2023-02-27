/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

    while (*s)
    {
        if (*s == '-')
            sign *= -1;
        else if (*s >= '0' && *s <= '9')
        {
            digit = *s - '0';
            result = result * 10 + digit;
        }
        else if (result > 0)
        {
            break;
        }

        s++;
    }

    return result * sign;
}
