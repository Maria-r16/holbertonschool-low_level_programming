#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string the revers
 * @s: pointer
 * Return: 0
 */

void print_rev(char *s)
{

	int i = _strlen(s) - 1 ; 
	
	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}

	printf("\n");
}
