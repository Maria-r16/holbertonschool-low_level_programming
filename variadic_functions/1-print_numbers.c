#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 *
 * @separator: the string to be printed between numbers
 *
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;

va_list nums;

va_start(nums, n);

while (i < n)
{
printf("%d", va_arg(nums, int));

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
i++;
}
va_end(nums);
printf("\n");
}
