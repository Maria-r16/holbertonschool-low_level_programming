#include "main.h"
#include <stdio.h>

/**
 * rev_string - print an  string  the  revers
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
	printf("%c", s[i]);
	i++;
	}

	i = i - 1;

	while (i >= 0)
	{
	printf("%c", s[i]);
	i--;
	}
}
