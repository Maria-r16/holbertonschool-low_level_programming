#include <stdio.h>

/**
* main - function main
* Description: print alphabet in lowercase
* Return: 0
*/

int main(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
		putchar (alpha);
		if (alpha == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
