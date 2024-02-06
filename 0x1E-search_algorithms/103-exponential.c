#include <stdio.h>
#include <math.h>
/**
  * binary_search - Searches for a value in a sorted array
  * @array: haystack(array of integers)
  * @l: first index
  * @r: last index
  * @value: needle(an integer)
  * Return: -1 on failure. index of value on success
  */
int binary_search(int *array, size_t l, size_t r, int value)
{
size_t i;
if (array == NULL)
return (-1);
while (r >= l)
{
printf("Searching in array: ");
for (i = l; i < r; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);
i = l + (r - l) / 2;
if (array[i] == value)
return (i);
if (array[i] > value)
r = i - 1;
else
l = i + 1;
}
return (-1);
}
/**
  * exponential_search - Searches for a value in a sorted array
  * @array: haystack(array of integers)
  * @size: size of the array
  * @value: needle(an integer)
  * Return: -1 on failure. index of value on success
  */
int exponential_search(int *array, size_t size, int value)
{
size_t i = 0, r;
if (array == NULL)
return (-1);
if (array[0] != value)
{
for (i = 1; i < size && array[i] <= value; i = i * 2)
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
}
r = i < size ? i : size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", i / 2, r);
return (binary_search(array, i / 2, r, value));
}
