#include "main.h"

/**
* rev_string - pass content of pointers to opposite || reverses a string.
* @s: pointer
*/

void rev_string(char *s)
{
	int i = 0, j = 0;

	char string[500];

	while (s[i])
	{
		*(string + i) = *(s + i);
		i++;
	}

	i = i - 1;

	while (i >= 0)
	{
		*(s + i) =  *(string  + j);
		j++;
		i--;

	}
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
