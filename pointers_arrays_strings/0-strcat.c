#include "main.h"

/**
* _strcat - concatenates two strings.
* @src: string added to dest string.
* @dest: where the src string will be added.
* Return: string dest
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
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
