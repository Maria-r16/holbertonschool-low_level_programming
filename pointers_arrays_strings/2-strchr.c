#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to check.
 * @c: character to check.
 * Return: Returns a pointer to the first occurrence of the character c in the string s, or NULL.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; *(s + i) ; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	if (*(s + i) == c)
		return (s + i);

	return (0);
}
