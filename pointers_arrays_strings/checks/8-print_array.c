#include "main.h"

/**
* print_array - print elements of an integer array
* @a: array
* @n: prints number of elements
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
		{
			continue;
		}
	printf(", ");
	}
	printf("\n");
}

/**
* main - check the code for
*
* Return: Always 0.
*/
int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}
