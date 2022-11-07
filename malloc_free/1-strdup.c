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
unsigned int size;
int i = 0;

if (str == NULL)
return (NULL);

while (str[i] != '\0')
{
i++;
}

s = (char *)malloc(i + 1 * sizeof(char));

if (s != NULL)
{
size = 0;
while (str[size] != '\0')
s[size] = str[size];
size++;
}
else
{
return (NULL);
}

s[size] = '\0';

return (s);
}