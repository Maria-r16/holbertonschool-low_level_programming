#include "main.h"
#include <stdio.h>

/**
 * puts2 - Print a character two at a time.
 * @str:containig characteres.
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0, len = 0;
	
	while (str[i++])
	{
		len++;
	}
	for (i = 0 ; i < len ; i += 2)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
