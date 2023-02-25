#include "main.h"

/**
 * more_numbers - will print from 0 to 14, ten times the string
 * Return: 10 times the string from 0 to 14
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}

			_putchar((j % 10) + '0');
		}

	_putchar('\n');
	}
}
