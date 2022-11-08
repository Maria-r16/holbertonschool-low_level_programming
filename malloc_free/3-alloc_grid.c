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
free(matrix);
while (j <= i)
{
free(matrix[j]);
j++;
}
return (NULL);
}
i++;
}

while (i < height)
{
while (j < width)
{
matrix[i][j] = 0;
j++;
}
i++;
}

return (matrix);
}