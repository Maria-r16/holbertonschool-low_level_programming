#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup -  returns a pointer to a newly allocated space in memory
*
* @str: string we need to duplicate
*
* Return: a pointer to the duplicated string or NULL
*/

char *_strdup(char *str)
{
char *s = NULL;
int size;
int i;

if (str == NULL)
{
return (NULL);
}

size = _strlen(str) + 1;
s = malloc(size * sizeof(char));

i = 0;
while (i < size)
{
if (s == NULL)
{
return (NULL);
}
s[i] = str[i];
i++;
}
return (s);
}