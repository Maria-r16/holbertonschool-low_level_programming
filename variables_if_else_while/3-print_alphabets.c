#include <stdio.h>

/**
 *main - main function
 *Description: Double alphabetic sequence
 *Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
	putchar (alpha);
	}
	for (alpha = 'A' ; alpha <= 'Z'; alpha ++)
	{
	putchar (alpha);
	if (alpha == 'Z')
	{
	putchar ('\n');
	}
	}
	return (0);
}
