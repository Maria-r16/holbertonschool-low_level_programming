#include "main.h"

/**
* puts2 - prints every other character of a string
* @str:containig characteres.
*/

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
	{
		len++;
	}
	for (i = 0 ; i < len ; i += 2)
	{
		putchar(str[i]);
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
	puts2(str);
	return (0);
}
