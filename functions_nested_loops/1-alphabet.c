#include "main.h"

/**
 * print_alphabet - alphabet printing using a new main function.
 * Description: alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	{
	_putchar(alpha);
	if (alpha == 'z')
	{
	_putchar('\n');
	}
	}
}
