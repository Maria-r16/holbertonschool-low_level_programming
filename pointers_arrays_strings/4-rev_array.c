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

/**
 * print_array - print an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
