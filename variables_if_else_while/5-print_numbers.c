#include <stdio.h>

/**
* main - function main
* Description: print single digit numbers
* Return: 0
*/

int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
		if (num == '9')
		{
			putchar('\n');
		}
	}
	return (0);
}
