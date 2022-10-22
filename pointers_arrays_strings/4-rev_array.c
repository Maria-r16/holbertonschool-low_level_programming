#include "main.h"

/**
 * reverse_array -
 * @a:
 * @n:
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j, x;
	int i = n;

	for (i --, j = 0 ; j < n / 2 ; j++, i--)
	{
		x = a[j], a[j] = a[i], a[i] = x;
	}
}
