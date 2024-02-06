#include <stdio.h>
#include <math.h>
/**
* recursion_search - serch for a value recursively
* @array: haystack(array of integers)
* @size: the size of the array
* @value: needle(an integer)
* Return: -1 on failure. index of value on success
*/
int recursion_search(int *array, size_t size, int value)
{
size_t mid = size / 2;
size_t i;
if (array == NULL || size == 0)
return (-1);
printf("Searching in array");
for (i = 0; i < size; i++)
printf("%s %d", (i == 0) ? ":" : ",", array[i]);
printf("\n");
if (mid && size % 2 == 0)
mid--;
if (value == array[mid])
{
if (mid > 0)
return (recursion_search(array, mid + 1, value));
return ((int)mid);
}
if (value < array[mid])
return (recursion_search(array, mid + 1, value));
mid++;
return (recursion_search(array + mid, size - mid, value) + mid);
}
/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: haystack(array of integers)
 * @size: size of the array
 * @value: needle(an integer)
 * Return: -1 on failure. index of the value on success
 */
int advanced_binary(int *array, size_t size, int value)
{
int idx;
idx = recursion_search(array, size, value);
if (idx >= 0 && array[idx] != value)
return (-1);
return (idx);
}
