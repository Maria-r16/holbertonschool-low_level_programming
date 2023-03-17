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
