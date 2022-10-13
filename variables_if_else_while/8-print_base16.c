#include <stdio.h>

/*
 * main - main print in lowercase all base 16 or hex numbers
 * Description: Print of the hexadecimal number sequence
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
