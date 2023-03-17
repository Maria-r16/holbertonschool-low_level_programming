#include "main.h"

/**
* puts_half - print the second half of the string.
* @str: printed string
*/

void puts_half(char *str)
{
	int a = 0, len = 0, n;

	while (str[a++])
	{
		len++;
	}

	if ((len % 2) == 0)
	{
		n = len / 2;
	}

	else
	{
		n = (len + 1) / 2;
	}

	for (a = n ; a < len ; a++)
	{
		putchar(str[a]);
	}

	putchar('\n');
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char *str;

	str = "0123456789";
	puts_half(str);
	return (0);
}
