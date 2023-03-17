#include "main.h"

/**
* print_rev - print a string the revers
* @s: pointer
*/

void print_rev(char *s)
{

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i = i -  1;

	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}

	printf("\n");
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}
