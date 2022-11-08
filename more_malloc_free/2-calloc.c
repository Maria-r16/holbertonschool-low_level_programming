#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: returns pointer or NULL if malloc fails 
 * or if nmemb or size is 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointer;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
pointer = malloc(nmemb * size);

if (pointer == NULL)
{
return (NULL);
}

while (i < nmemb * size)
{
pointer[i] = 0;
i++;
}
return (pointer);
}