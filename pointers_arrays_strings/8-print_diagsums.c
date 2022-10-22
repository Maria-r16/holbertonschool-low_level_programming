#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix.
 * @a: pointer to start of matrix.
 * @size: width of matrix column.
 * Return: -
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int s1;
	int s2;

	i = 0;
	j = 1;
	s1 = 0;
	s2 = 0;

	while (i < size)
	{
		s1 = s1 + a[(size + 1) * i];
		s2 = s2 + a[(size - 1) * j];
		j++;
		i++;
	}
	printf("%d, %d\n", s1, s2);
}
