#include <stdio.h>

/*
 * main - main function
 * Description: Print of the hexadecimal number sequence
 * Return: 0
 */

int main(void)
{
	int num;
	int alpha;

	for (num = 0 ; num <= 9 ; num++)
	{
	putchar (num);
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
