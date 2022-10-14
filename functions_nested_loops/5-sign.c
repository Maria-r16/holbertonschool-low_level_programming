#include "main.h"

/**
 * print_sign - print numbers according to assignment.
 * @n: value of 0
 * Return: 1 when is positiv, -1 the value is negativ or 0
 */

int print_sign(int n)
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

	else
	{
	_putchar(48);
	return (0);
	}
}
