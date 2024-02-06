#include <stdio.h>
#include <stdlib.h>
/**
 * binary_search -  searches for a value in a sorted array of ints using BS
 * @array: haystack(array of integers)
 * @size: the size of the array
 * @value: the needle(integer)
 * Return: -1 on failure. the index of the value on success
 */
int binary_search(int *array, size_t size, int value)
{
size_t i, mid, l = 0, r = size - 1;
if (array == NULL)
return (-1);
while (l <= r)
{
printf("Searching in array: ");
for (i = l; i < r; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);
mid = (l + r) / 2;
if (value == array[mid])
return (mid);
else if (value > array[mid])
{
l = mid + 1;
}
else if (value < array[mid])
{
r = mid - 1;
}
}
return (-1);
}
