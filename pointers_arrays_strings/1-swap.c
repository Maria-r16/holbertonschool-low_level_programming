#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: first value to change
* @b: second value to change
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int a;
int b;

a = 98;
b = 42;
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);
return (0);
}
