#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string the revers
 * @s: pointer
 * Return: 0
 */

void print_rev(char *s)
{

	int i;
	
	for (i = 0 ; s[i] != '\0' ; i++);

	for (i = i - 1 ; i >= 0 ; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
