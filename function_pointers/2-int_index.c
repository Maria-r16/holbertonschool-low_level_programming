#include "function_pointers.h"

/**
* int_index - searches for an integer
*
* @array: array of ints
*
* @size: the size of the array
*
* @cmp: pointer to the comparing function
*
* Return: index of the first element for which cmp returns non-zero
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (cmp && array)
{
while (i < size)
{
if (cmp(array[i]) != 0)
return (i);
i++;
}
}
return (-1);
}
