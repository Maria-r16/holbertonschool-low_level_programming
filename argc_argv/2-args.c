#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: number of arguments to print
 *
 * @argv: array pointing to arguments
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while(i < argc)
	{
		putchar("%s\n", i, argv[i]);
		i++;
	}
	return (0);
}
