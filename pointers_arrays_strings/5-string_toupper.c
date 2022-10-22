#include "main.h"

/**
 * string_toupper -
 * @s:
 * Return:
 */

char *string_toupper(char *)
{
	int j;

	for (j = 0 ; s[j] != '\0' ; j++)
	{
		if (s[j] > 96 && s[j] < 123)
		{
			s[j] -= 32;
		}

	return (s);

	}

}
