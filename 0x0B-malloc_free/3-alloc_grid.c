#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * @width: number of columns
 * @height: Number of rows
 * Return: Pointer
 */

int **alloc_grid(int width, int height)
{
int **grid, i, j;
if (width <= 0 || height <= 0)
return (NULL);
grid = (int **)malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (i =0; i < height;i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
