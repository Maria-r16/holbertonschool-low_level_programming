#include "main.h"

/**
 * _strncpy - 
 * @dest:
 * @src:
 * @n:
 * Return:
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		j++;
		dest[j] = src[j];
	}

	while (j < n)
	{
		j++
		dest[j] = '\0';
	}

	return (dest);

}
