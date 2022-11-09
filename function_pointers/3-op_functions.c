#include <stdio.h>
#include "3-calc.h"

/**
  * op_add - sum of two variables
  * @a: the first num type int
  * @b: the second num type int
  *
  * Return: result the sum
  */
int op_add(int a, int b)
{
return (a + b);
}

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mod - the division of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}