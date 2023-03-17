#include "main.h"

/**
 * _strncat - concatenate two strings without the null
 * @dest: string destiny
 * @src: string to pass
 * @n: number of elements to concatenate
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
		;
	}

	for (j = 0 ; j < n && src[j] != '\0' ; j++, i++)
	{
	dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
