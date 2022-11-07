#include <stdio.h>

/**
 * main - main function
 * Description:
 * Return: 0
 */

int main(void)
{
	char num;

	for (num = '0' ; num <= '9' ; num++)
	{
	putchar (num);
	if (num == '9')
	{
	putchar ('\n');
	}
	}
	return (0);
}
