#include "main.h"
#include <stdio.h>

/**
 * rev_string - print an  string  the  revers
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0;

	char string [500];

	while (s[i] != '\0')
	{
		*string[i] = *s[i];
		i++;
	}

	i = i - 1;

	while (i >= 0)
	{
		*s[i] =  *string[j];
		j++;
		i--;

	}
}
