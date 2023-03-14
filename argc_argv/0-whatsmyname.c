#include <stdio.h>

/**
 * main - imprime nombre del programa
 * @argc: numero de argumentos pasados al programa
 * @argv: un array de cadenas que contiene los argumentos pasados al programa
 *
 * Return: 0 en caso de exito
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
