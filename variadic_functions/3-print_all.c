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
types data[] = {
{"c", character},
{"i", integer},
{"f", floatelement},
{"s", string},
{NULL, NULL}
};

int i = 0, j = 0;
char *sep;

va_list list;

sep = "";
va_start(list, format);

while (format && format[i] != '\0')
{
while (data[j].ch != NULL)
{
if (format[i] == data[j].ch[0])
{
printf("%s", sep);
data[j].func(list);
sep = ", ";
}

j++;
}

i++;
}
va_end(list);
printf("\n");
}
