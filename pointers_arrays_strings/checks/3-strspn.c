#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to check.
 * @accept: the bytes to include.
 * Return: number of bytes of s in accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (!accept[j])
			break;
	}
	return (i);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
