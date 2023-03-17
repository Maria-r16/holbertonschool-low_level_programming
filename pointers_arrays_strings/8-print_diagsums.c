#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix.
 * @a: pointer to start of matrix.
 * @size: width of matrix column.
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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int c3[3][3] = {
		{0, 1, 5},
		{10, 11, 12},
		{1000, 101, 102},
	};
	int c5[5][5] = {
		{0, 1, 5, 12124, 1234},
		{10, 11, 12, 123521, 12512},
		{1000, 101, 102, 12545, 214543435},
		{100, 1012451, 11102, 12545, 214543435},
		{10, 12401, 10452, 11542545, 1214543435},
	};
	print_diagsums((int *)c3, 3);
	print_diagsums((int *)c5, 5);
	return (0);
}
