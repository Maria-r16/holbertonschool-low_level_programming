#include "3-calc.h"

/**
* main - program that performs simple operations (Calculator)
*
* @argc: number of arguments
*
* @argv: argument vector+
*
* Return: 0
*/

int main(int argc, char *argv[])
{
int cant1, cant2;
char *form;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
cant1 = atoi(argv[1]);
cant2 = atoi(argv[3]);
form = (argv[2]);

if (get_op_func(form) == NULL || form != '\0')
{
printf("Error\n");
exit(99);
}

if ((*form == '/' && cant2 == 0) || (*form == '%' && cant2 == 0))
{
printf("Error\n");
exit(100);
}

printf("%d\n", get_op_func(form)(cant1, cant2));
return (0);
}
