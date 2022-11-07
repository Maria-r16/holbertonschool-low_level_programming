#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array of chars, and initializes it with a specific char.
 *@size: size array
 *@c: character
 * Return: a pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int x = 0;

if (size == 0) return (NULL);

if (size != 0)
{
array = (char *)malloc(size * sizeof(char));

if (array != NULL)
{
while (x < size)
{
array[x] = c;
x++;
}
}

}
return (array);
}
