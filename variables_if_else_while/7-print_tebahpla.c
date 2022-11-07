#include <stdio.h>

/**
 * main - main function
 * Description: Backwards alphabet
 * Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
	{
	putchar (alpha);
	if (alpha == 'a')
	{
	putchar ('\n');
	}
	}
	return (0);
}
