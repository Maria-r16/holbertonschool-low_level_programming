#include "main.h"
#include <stdio.h>

/**
 * print_rev - print a string the revers
 * @s: pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	int i = len - 1 ; 
	
	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}

	printf("\n");
}
