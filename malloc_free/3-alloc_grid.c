#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: int type parameter
 * @height: int type parameter
 * Return: matrix
 */
int **alloc_grid(int width, int height)
{
int **matrix;
int i = 0, j = 0;

if (width <= 0 || height <= 0)
{
return  ('\0');
}

matrix = malloc(sizeof(int *) * height);

if (matrix == NULL)
{
return (NULL);
}

while (i < height)
{
matrix[i] = malloc(sizeof(int) * width);
if (matrix[i] == NULL)
{
i = i - 1;
while (i >= 0)
{
free(matrix[i]);
i--;
}
free(matrix);
return (NULL);
}

while (j < width)
{
matrix[i][j] = 0;
j++;
}
}

return (matrix);
}