#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string the revers
 * @s: pointer
 * Return: 0
 */

void print_rev(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		printf("%c", s[i]);
		i = i - 1;
	}

	printf("\n");
}
