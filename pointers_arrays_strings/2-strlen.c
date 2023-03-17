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

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char *str;
int len;

str = "My first strlen!";
len = _strlen(str);
printf("%d\n", len);
return (0);
}
