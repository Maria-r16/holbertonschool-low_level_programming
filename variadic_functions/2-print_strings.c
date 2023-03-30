#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *
 * @separator: string to be printed between the strings
 *
 * @n: number of strings passed to the function
 *
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *str;

va_list arguments;

va_start(arguments, n);

while (i < n)
{
str =  va_arg(arguments, char *);
if (str == NULL)
{
printf("%p", str);
}
else
{
printf("%s", str);
}

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
i++;
}
va_end(arguments);
printf("\n");
}
