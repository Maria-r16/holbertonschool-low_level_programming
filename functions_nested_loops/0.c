#include "main.h"

/**
* print_alphabet_x10 - alphabet printing teen using a new main function.
* Description: alphabet by teen times
* Return: 0
*/

void print_alphabet_x10(void)
{

	char alpha;
	int i = 0;

	while (i <= 9)
	{
		for (alpha = 'a'; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
	
	_putchar('\n');
	i++;
	}
}
