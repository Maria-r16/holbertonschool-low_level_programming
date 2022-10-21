#include "main.h"

/**
 **_strcat - concatenates two strings.
 *@src: string added to dest string.
 *@dest: where the src string will be added.
 *Return: string dest
 */

char *_strcat(char *dest, char *src)
{
	char *result;

	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}

	for (j = 0 ; src[j] != '\0' ; ++j, ++i)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	result = dest;

	return (result);
}
