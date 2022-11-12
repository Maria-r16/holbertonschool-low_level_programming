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

if (argc != 4)
{
printf("Error\n");
exit(98);
}
cant1 = atoi(argv[1]);
cant2 = atoi(argv[3]);

if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((argv[2] == '/' && cant2 == 0) || (argv[2] == '%' && cant2 == 0))
{
printf("Error\n");
exit(100);
}
	
printf("%d\n", get_op_func(argv[2])(cant1, cant2));
return (0);
}
