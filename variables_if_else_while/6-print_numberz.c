#include <stdio.h>

/**
* main - function main
* Description: prints all single digit numbers
* Return: 0
*/

int main(void)
{
	int number;

	for (number = '0' ; number <= '9' ; number++)
	{
		putchar(number);
		if (number == '9')
		{
			putchar('\n');
		}
	}
	return(0);
}
