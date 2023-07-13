#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: first element
 * @max: last element
 * Return: Array of integers
 */
int *array_range(int min, int max)
{
int *arr, i, j = 0;
if (min > max)
return (NULL);
arr = (int *)malloc(sizeof(int) * (max - min) + 1);
if (arr == NULL)
return (NULL);
for (i = min;i <= max; i++)
{
*(arr +j) = i;
j++;
}
return (arr);
}
