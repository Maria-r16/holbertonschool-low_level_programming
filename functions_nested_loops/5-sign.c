#include "main.h"

/**
 * print_sing -
 * @n:
 * Description:
 * Return: 
 */

int print_sing(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}

	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}

	else (n == 0)
	{
	_putchar(48);
	return (0);
	}
}
