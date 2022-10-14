#include "main.h"

/**
 * time_tablet - prints times table
 * Return: - 
 */

void times_table(void)
{
	int n, mult, ret;

	for (n = 0 ; n <= 9; n++)
	{
		_putchar('0');

	for (mult = 1; mult <= 9; mult++)
	{
		_putchar(',');
		_putchar(' ');
		ret = n * mult;

		if (ret <= 9)
			_putchar(' ');
		else
			_putchar((ret / 10) + '0');

		_putchar((ret % 10) + '0');
	}
	_putchar('\n');
	}
}
