#include "main.h"

/**
 * main - mian fuction
 * Description: alphabet
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
	_putchar(alpha);
	}
	if (alpha == 'z')
	{
	_putchar('\n');
	}
	}
}
