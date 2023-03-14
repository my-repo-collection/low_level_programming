#include <stdio.h>

/**
 * main - Imprime el número de argumentos pasados al programa
 * @argc: El número de argumentos pasados al programa
 * @argv: Un array de cadenas que contiene los argumentos pasados al programa
 *
 * Return: 0 en caso de éxito
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
