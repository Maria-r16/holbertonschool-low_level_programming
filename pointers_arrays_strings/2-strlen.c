#include "main.h"

/**
* int _strlen -  returns the length of a string.
* @s: pointer
*/

int _strlen(char *s)
{
int i = 0;

	while (s[i] != '\0')
	++i;
	return (i);
}
