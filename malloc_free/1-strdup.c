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

char *s;
int size = 0;
int i = 0;

if (str == NULL) 
return (NULL);

while (str[size] != '\0')
{
size++;
}

s = malloc(size + 1 * sizeof(char));

if (str != NULL)
{
size = 0;
while (i < size)
{
s[size] = str[size];
size++;
}
}
else
{
return (NULL);
}

return (s);
}