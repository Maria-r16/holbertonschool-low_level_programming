#include "function_pointers.h"

/**
* print_name - print name
*
* @name: the string
*
* @f: the function
*
* Return: no value (void)
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
