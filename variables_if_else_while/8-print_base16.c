#include <stdio.h>

/**
* main - function main
* Description: prints all the numbers of base 16 in lowercase
* Return 0
*/

int main(void)
{
	int number;
	char alpha;

	for (number = 0 ; number <= 9 ; number++)
	{
		putchar((number % 10) + '0');
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
		if (alpha == 'f')
		{
			putchar('\n');
		}
	}
	return (0);
}
