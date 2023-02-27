/**
 * _strcpy - copies the string pointed to by src,
 * including null byte (\0), to the buffer pointed
 * to by dest.
 *
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/*
	 * loop through each character in the source string
	 */
	while (src[i] != '\0')
	{
		/*
		 * copy current character from src to dest
		 */
		dest[i] = src[i];
		i++;
	}

	/*
	 * add null terminator to the end of dest
	 */
	dest[i] = '\0';

	/*
	 * return a pointer to dest
	 */
	return (dest);
}
