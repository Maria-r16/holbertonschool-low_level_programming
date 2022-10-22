#include "main.h"

/**
 * leet - encodes a string into 1337, i.e. convert letters to numbers.
 * @s: string to encode.
 * Return: coding.
 */

char *leet(char *s)
{
	int i, j;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (i = 0 ; *(s + i); i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (x[j] == *(s + i))
				*(s + i) = y[j];
		}
	}
	return (s);
}
