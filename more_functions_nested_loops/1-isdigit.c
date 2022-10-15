#include "main.h"

/**
 * _isdigit - will print where only numbers
 * Return: prints a 1 if it is a number, otherwise it will be 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}

	return (0);
}
