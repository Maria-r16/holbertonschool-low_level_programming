#ifndef TYPE_FUNCTIONS_H
#define TYPE_FUNCTIONS_H

#include "variadic_functions.h"

/**
 * integer - prints int
 * @list: arguement of list
 * @s: seperator
 * Return: 0
 */
void integer(va_list list, char *s)
{
printf("%s%d", s, va_arg(list, int));
}

/**
 * character - prints char
 * @list: arguement char
 * @sep: seperator
 */
void character(va_list list, char *sep)
{
printf("%s%c", sep, va_arg(list, int));
}

/**
 * string - prints string
 * @sep: seperator
 * @list: list to print
 * Return: none
 */
void string(va_list list, char *sep)
{
char *s;
s = va_arg(list, char *);
if (s == NULL)
s = "(nil)";
printf("%s%s", sep, s);
}

/**
 * floate - prints floats
 * @sep: float to print
 * @list: next arguement of list to print
 * Return: none
 */
void floate(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}
#endif
