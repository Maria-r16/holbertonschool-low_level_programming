#include <stdio.h>

/**
* main - function main
* Description: prints the lowercase alphabet in reverse
* Return: 0
*/

int main(void)
{
	char alpha;

	for (alpha = 'z' ; alpha >= 'a' ; alpha--)
	{
		putchar(alpha);
		if (alpha == 'a')
		{
			putchar('\n');
		}
	}
	return (0);
}