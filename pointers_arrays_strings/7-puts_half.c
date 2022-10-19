#include "main.h"
#include <stdio.h>

/**
 * puts_half - print the second half of the string.
 * @str: printed string 
 * Return: 0
 */

void puts_half(char *str)
{
	int a = 0, len = 0, n;

	while (str[a++])
	{
		len++;
	}

	if ((len % 2) == 0)
	{
		n = len / 2;
	}

	else
	{
		n = (len +1) / 2;
	}

	for (a = n ; a < len ; a++)
	{
		putchar(str[a]);
	}

	putchar('\n');
}
