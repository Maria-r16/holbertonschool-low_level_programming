#include "variadic_functions.h"
#include "type_functions.h"

/**
 * print_all - function that prints arguments of different types
 *
 * @format: list of types of arguments
 *
 * Return: nothing
*/
void print_all(const char * const format, ...)
{

va_list list;
int i = 0, j = 0;
char *sep;

type_t data[] = {
{"c", character},
{"i", integer},
{"f", floate},
{"s", string},
{NULL, NULL}
};

va_start(list, format);
sep = "";
while (format != NULL && format[i] != '\0')
{

while (j < 4)
{
if (format[i] == *(data[j]).op)
{
data[j].f(list, sep);
sep = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(list);
}

