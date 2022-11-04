#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - add positive numbers.
*
* @argv: argument list the function main.
*
* @argc: number of arguments
*
* Return: 0
*/

int main(int argc, char *argv[])
{
int suma = 0;
int i = 1;
int j = 0;

if (argc == 1)
{
printf("0\n");
return (1);
}

while (i < argc)
{
while (argv[i][j] != '\0')
{
if (argv[i][j] >= '0' && argv[i][j] <= '9')
{
continue;
}
else
{
printf("Error\n");
return (1);
}
j++;
}
suma += atoi(argv[i]);
i++;
}

printf("%d\n", suma);

return (0);
}