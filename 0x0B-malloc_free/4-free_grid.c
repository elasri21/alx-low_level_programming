#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid -  frees a 2 dimensional grid.
 * @grid: two dimensional array
 * @height: number of rows
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
grid[i] = NULL;
}
}
