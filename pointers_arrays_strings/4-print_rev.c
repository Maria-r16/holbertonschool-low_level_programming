#include "main.h"

/**
* print_rev - print a string the revers
* @s: pointer
*/

void print_rev(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i = i -  1;

	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}

	printf("\n");
}
