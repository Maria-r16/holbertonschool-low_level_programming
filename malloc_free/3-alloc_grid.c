#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int type parameter
 * @height: int type parameter
 * Return: matrix
 */
int **alloc_grid(int width, int height)
{
int i = 0;
int j = 0;
int **matrix;

if (width <= 0 || height <= 0)
{
return  (NULL);
}
matrix = malloc(height * sizeof(int *));

if (matrix == NULL)
{
return (NULL);
}

while (i < height)
{
matrix[i] = malloc(width * sizeof(int));

if (matrix[i] == NULL)
{
while (j < i)
{
free(matrix[j]);
free(matrix);
return (NULL);
j++;
}
}

while (j < width)
{
matrix[i][j] = 0;
j++;
}

}
return (matrix);
}