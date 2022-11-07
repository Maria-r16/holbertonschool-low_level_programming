#include "main.h"

/**
 * reverse_array - reverses the contents of an integer array.
 * @a: input.
 * @n:  number of elements of the array.
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
