#include "main.h"

/**
 * _strncat - concatenate two strings without the null
 * @dest: string
 * @src string
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
