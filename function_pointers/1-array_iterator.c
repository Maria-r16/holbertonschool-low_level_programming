#include "function_pointers.h"

/**
* array_iterator - Call a function on each element of an array
*
* @array: the array
*
* @size: the size of the array
*
* @action: pointer to function
*
* Return: function's address.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (action && array)
{
while (i < size)
action(array[i++]);
}
}
