#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: type unsigned int
 *
 * Return: pointer to the allocated memory
 * or 98 if FAIL
*/
void *malloc_checked(unsigned int b)
{
int *pointer;

pointer = malloc(b);
if (pointer == NULL)
{
exit(98);
}
return (pointer);
}
