#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that releases a two-dimensional grid
 * previously created by the alloc_grid function.
 * @grid: free
 * @height: int type parameter
 * Return: matrix
 */
void free_grid(int **grid, int height)
{

int i = 0;

if (grid == 0 || height == 0)
{
return;
}

while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
