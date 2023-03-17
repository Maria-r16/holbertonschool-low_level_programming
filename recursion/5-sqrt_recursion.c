#include "main.h"

/**
* evaluate - Makes possible to evaluate from 1 to n
* @i: same number as n
* @j: number that iterates from 1 to n
* Return: 1
*/

int evaluate(int i, int j)
{
	if (j * j == i)
	{
		return (j);
	}
	else if (j * j > i)
	{
		return (-1);
	}
	return (evaluate(i, j + 1));
}

/**
* _sqrt_recursion - returns the natural square root of n
* @n: Number Integer
* Return: the natural square root of a number.
*/

int _sqrt_recursion(int n)
{
	return (evaluate(n, 1));
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(16);
	printf("%d\n", r);
	r = _sqrt_recursion(17);
	printf("%d\n", r);
	r = _sqrt_recursion(25);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);
	return (0);
}
