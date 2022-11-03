#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: number of command line arguments
 *
 * @argv: array pointing to arguments
 *
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int cont = 0;

	while (cont < argc)
	{
		cont++;
	}
	printf("%d\n", cont - 1);

	return (0);
}
