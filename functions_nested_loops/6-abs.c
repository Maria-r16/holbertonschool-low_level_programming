#include "main.h"

/**
 * _abs: calculates the absolute value of an integer.
 * @c: number to be calculated
 * Return: will return the value
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;
	abs_val = c * -1;

	return (abs_val);
	}
	return (c);
}
