/**
 * _strlen_recursion - devuelve la long de una cadena
 *
 * @s: la cadena de la que vamos a obtener la longitud
 *
 * Return: la long del string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
