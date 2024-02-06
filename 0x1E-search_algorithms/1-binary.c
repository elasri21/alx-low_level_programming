#include <stdio.h>
#include <stdlib.h>
/**
 * print_a - prints an array
 * @array: array to be printed
 * @l: first index in the array
 * @r: last index in the array
 * Return: Nothing
 */
void print_a(int *array, size_t l, size_t r)
{
if (array != NULL)
{
while (l <= r)
{
if (l == r)
printf("%d\n", array[l]);
else
printf("%d, ", array[l]);
l++;
}
}
}
/**
 * binary_search -  searches for a value in a sorted array of ints using BS
 * @array: haystack(array of integers)
 * @size: the size of the array
 * @value: the needle(integer)
 * Return: -1 on failure. the index of the value on success
 */
int binary_search(int *array, size_t size, int value)
{
size_t mid, l = 0, r = size - 1;
if (array == NULL)
return (-1);
printf("Searching in array: ");
print_a(array, l, r);
while (l <= r)
{
mid = (l + r) / 2;
if (value == array[mid])
return (mid);
else if (value > array[mid])
{
l = mid + 1;
printf("Searching in array: ");
print_a(array, l, r);
}
else if (value < array[mid])
{
r = mid - 1;
printf("Searching in array: ");
print_a(array, l, r);
}
}
return (-1);
}
