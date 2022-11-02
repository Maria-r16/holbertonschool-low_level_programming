#include "main.h"

/**
 * ev - Makes possible to evaluate from 1 to n
 * @i: same number as n
 * @j: number that iterates from 1 to n
 */

int ev(int i, int j)
{
	if (j * j == i)
		return (j);

	else if (j * j > i)
		return (-1);

	return (ev(i, j + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 */

int _sqrt_recursion(int n)
{
	return (ev(n, 1));
}