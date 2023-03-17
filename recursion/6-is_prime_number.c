#include "main.h"

/**
*  prime2 - Makes possible to evaluate from 1 to n
*  @i: same number as n
*  @j: number that iterates from 1 to n
*  Return: 1
*/

int prime2(int i, int j)
{
	if (i == j)
		return (1);

	else if (i % j == 0)
		return (0);

	return (prime2(i, j + 1));
}

/**
* is_prime_number - checks if the number is a prime number
* @n: the number to check
* Return: 1 or 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_prime_number(1);
	printf("%d\n", r);
	r = is_prime_number(1024);
	printf("%d\n", r);
	r = is_prime_number(16);
	printf("%d\n", r);
	r = is_prime_number(17);
	printf("%d\n", r);
	r = is_prime_number(25);
	printf("%d\n", r);
	r = is_prime_number(-1);
	printf("%d\n", r);
	r = is_prime_number(113);
	printf("%d\n", r);
	r = is_prime_number(7919);
	printf("%d\n", r);
	return (0);
}
