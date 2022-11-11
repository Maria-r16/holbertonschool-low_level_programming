#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - Call a function on each element of an array
*
* @array: the array
*
* @size: the size of the array
*
* @action: pointer to function
*
* Return: no value (void)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

i = 0;
if (action != NULL && array != NULL)
{
while (i < size)
action(array[i]);
i++;
}
}
