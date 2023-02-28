#include "main.h"

/**
 * print_line - will print a straight line, otherwise it will be a line break
 * @n: number of times the character will be printed
 * Return: -
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0 ; i < n; i++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}

