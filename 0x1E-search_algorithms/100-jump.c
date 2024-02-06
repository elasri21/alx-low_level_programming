#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array using JSA
 * @array: haystack(array of integers)
 * @size: the size of the array
 * @value: the needle(an integer)
 * Return: -1 on failure. index of the value on success
 */
int jump_search(int *array, size_t size, int value)
{
int idx, m, k, prv;
if (array == NULL || size == 0)
return (-1);
m = (int)sqrt((double)size);
k = 0;
prv = idx = 0;
do {
printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
if (array[idx] == value)
return (idx);
k++;
prv = idx;
idx = k *m;
} while (idx < (int)size && array[idx] < value);
printf("Value found between indexes [%d] and [%d]\n", prv, idx);
for (; prv <= idx && prv < (int)size; prv++)
{
printf("Value checked array[%d] = [%d]\n", prv, array[prv]);
if (array[prv] == value)
return (prv);
}
return (-1);
}
