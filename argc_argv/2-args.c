#include <stdio.h>

/**
 * main - Imprime todos los argumentos recibidos
 * @argc: El número de argumentos pasados al programa
 * @argv: Un array de cadenas que contiene los argumentos pasados al programa
 *
 * Return: 0 en caso de éxito
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
