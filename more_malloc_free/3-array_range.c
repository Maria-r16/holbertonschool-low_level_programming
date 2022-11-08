#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers.
 * @min: int type
 * @max: int type
 * Return: the pointer to the new array or NULL if FAIL malloc
 * and if min is elderly to max.
*/
int *array_range(int min, int max)
{
int *array;
int i = 0;
int size;

if (min > max)
return (NULL);

size = (max - min) + 1;

array = malloc(sizeof(int) * size);

if (array == NULL)
{
return (NULL);
}

while (i < size)
{
array[i] = min;
i++;
min++;
}
return (array);
}
