#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - searches for a value in an array of integers using the lsa
 * @array: haystack(array of integers)
 * @size: the size of the array
 * @value: the needle(an integer)
 * Return: -1 on failure. index of value in success
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;
if (array == NULL)
return (-1);
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
