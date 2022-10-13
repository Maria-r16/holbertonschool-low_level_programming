#include <stdio.h>

/*
 * main - main function
 * Description: Print of the hexadecimal number sequence
 * Return: 0
 */

int main(void)
{
	char hexa;

	for (hexa = '0x0' ; hexa <= '0xf' ; hexa++)
	{
	putchar (hexa);
	if (hexa == '0xf')
	{
	putchar ('\n');
	}
	}
	return (0);
}
