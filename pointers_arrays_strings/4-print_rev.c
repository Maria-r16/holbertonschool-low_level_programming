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

	for (int i = len - 1 ; i >= 0 ; i--)
	{
		printf("%c", s[i]);
	}
	printf('\n');
}
