#include <stdio.h>

/**
* main - function main
* Description: prints the alphabet in lowercase to except 'q' and 'e'.
* Return: 0
*/

int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
		{
			continue;
		}
		putchar(alpha);
		if (alpha == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}