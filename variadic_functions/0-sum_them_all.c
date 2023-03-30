#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: number of parameters
 *
 * Return: result sum or 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int i = 0, sum = 0;

va_start(nums, n);

while (i < n)
{
sum += va_arg(nums, int);
i++;
}

va_end(nums);
return (sum);
}
