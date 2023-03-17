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
