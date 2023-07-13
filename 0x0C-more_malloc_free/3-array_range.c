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
int i, size = max - min + 1;
int *arr;
if (min > max)
return (NULL);
arr = (int *)malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}
