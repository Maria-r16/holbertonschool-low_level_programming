#include "main.h"

/**
 * string_toupper -
 * @s:
 * Return:
 */

char *string_toupper(char *s)
{
	int j = 0;

	while (*(s + j))
	{
		if (*(s + j) >= 'a' && *(s + j) <= 'z')
		{
			*(s + i) -= 'a' - 'A';
		}
		i++;
	}
	return (s);
}
