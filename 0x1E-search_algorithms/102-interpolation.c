#include <stdio.h>
#include <math.h>
/**
 * interpolation_search - searches for a value in a sorted arra
 * @array: haystack(array of integers)
 * @size: the size of the array
 * @value: needle(an integer)
 * Return: -1 on failure. index of the value on success
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t p, l, h;
double ft;

if (array == NULL)
return (-1);
l = 0;
h = size - 1;
while (size)
{
ft = (double)(h - l) / (array[h] - array[l]) * (value - array[l]);
p = (size_t)(l + ft);
printf("Value checked array[%d]", (int)p);
if (p >= size)
{
printf(" is out of range\n");
break;
}
else
printf(" = [%d]\n", array[p]);
if (array[p] == value)
return ((int)p);
if (array[p] < value)
l = p + 1;
else
h = p - 1;
if (l == h)
break;
}
return (-1);
}
