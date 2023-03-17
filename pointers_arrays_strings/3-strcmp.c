#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: destination string.
 * @s2: string to copy.
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0 ; s1[j] != '\0' && s2[j] != '\0' ; j++)
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
	}
	return (0);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}
