#include "main.h"

/**
 * string_toupper -  changes all lowercase letters of a string to uppercase.
 * @s: change
 * Return: return the conversion to uppercasse.
 */

char *string_toupper(char *s)
{
	int j = 0;

	while (*(s + j))
	{
		if (*(s + j) >= 'a' && *(s + j) <= 'z')
		{
			*(s + j) -= 'a' - 'A';
		}
		j++;
	}
	return (s);
}
