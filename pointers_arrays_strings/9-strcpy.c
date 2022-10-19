#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src, including the terminating null byte (\0), into the buffer pointed to by (dest).
 * @dest:buffer pointed
 * @src:string to copy
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
