#include "main.h"

/**
 * _strncpy - copy an string
 * @dest: string destination
 * @src: string to copy
 * @n: # string to copy
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[j] = src[j];
	}

	for (; j < n ; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
