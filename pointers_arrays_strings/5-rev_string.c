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
