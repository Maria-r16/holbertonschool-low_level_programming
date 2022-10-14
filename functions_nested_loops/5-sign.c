#include "main.h"

/**
 * print_sign - print numbers according to assignment.
 * @n: value of 0
 * Return: should return num 0 when is it the same value, 1 when the value is positiv or -1 when the value is negativ
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
