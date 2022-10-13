#include <stdio.h>

/**
 *main - main function
 *Description:
 *Return: 0
 */

int main(void)
{
	int num;

	for (num = 0 ; num <= 9 ; num++)
	{
	putchar((num % 10) + '0');
	if (num == 9)
	{	
		continue;
	}
	putchar(',');
	putchar(' ');
	}
	return (0);
}
