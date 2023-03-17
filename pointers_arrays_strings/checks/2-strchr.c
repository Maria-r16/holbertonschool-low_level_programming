#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to check.
 * @c: character to check.
 * Return: Returns a poiniter to the first occurrence of the character @c.
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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
