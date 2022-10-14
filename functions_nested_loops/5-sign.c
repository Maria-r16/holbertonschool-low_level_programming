#include "main.h"

/**
 * print_sing -
 * @n:
 * Description:
 * Return: 
 */

int print_sing(int n)
{
	if (n == 0)
	{
	_putchar(n);
	return (0);
	}

	else if (n > 0)
	{
	_putchar(n);
	return (1);
	}

	else (n < 0)
	{
	_putchar(n);
	return (-1);
	}
}
