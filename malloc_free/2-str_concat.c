#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat -  concatenates two strings
*
* @s1: string 1
*
* @s2: string 2
*
* Return: NULL
*/

char *str_concat(char *s1, char *s2)
{
char *s;
int size1, size2, i, j;

if (s1 == 0)
s1 = "";

if (s2 == 0)
s2 = "";

for (size1 = 0; s1[size1] != '\0'; size1++);

for (size2 = 0; s2[size2] != '\0'; size2++);

size2++;
s = malloc(size1 * sizeof(*s1) + size2 * sizeof(*s2));

if (s == 0)
return (NULL);

for (i = 0, size2 = 0; i < size1 + size2; i++)
{
if (i < size1)
s[i] = s1[i];

else
s[i] = s2[j++];
}
return (s);
}