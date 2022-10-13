#include <stdio.h>

/**
 *main - main function
 *Description: alphabet wirh exceptions
 *Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
	if (alpha == 'e' || alpha == 'q')
	{
	continue;
	}
	putchar (alpha);
	if (alpha == 'z')
	{
	putchar ('\n');
	}
	}
	return (0);
}
