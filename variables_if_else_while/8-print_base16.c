#include <stdio.h>

/**
 * main - main Prints in lowercase all base sixteen or hex numbers.
 *Description: base sixteen print
 * Return: 0
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0 ; num <= 9 ; num++)
	{
	putchar ((num % 10) + '0');
	}
	for (alpha = 'a' ; alpha <= 'f' ; alpha++)
	{
	putchar (alpha);
	if (alpha == 'f')
	{
	putchar ('\n');
	}
	}
	return (0);
}
