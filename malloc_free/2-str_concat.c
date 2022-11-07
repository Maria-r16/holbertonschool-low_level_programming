#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat -  concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: NULL
*/
char *str_concat(char *s1, char *s2)
{
char *s;
int size1 = 0, size2 = 0;
int i = 0, j = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[size1] != '\0')
{
size1++;
}

while (s2[size2] != '\0')
{
size2++;
}

s = (char *)malloc((size1 + size2 + 1) * sizeof(char));

if (s == NULL)
{
return (NULL);
}

while (s1[i] != '\0')
{
s[i] = s1[i];
i++;
}

while (s2[j] != '\0')
{
s[j] = s2[j];
j++;
}
return (s);
}
