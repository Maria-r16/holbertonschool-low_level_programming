#include "main.h"

/**
 * print_most_numbers -will print the numbers, whit exceptions
 * Return:the numbers of 0 to 9
 */

void print_most_numbers(void)
{
	int n = 0;

	for (; n <= 9 ; n++)
	{
	if (n == 2 || n == 4)
	{
		continue;
	}

		else
		{
			_putchar(n + '0');
		}
	}

	_putchar('\n');
}
