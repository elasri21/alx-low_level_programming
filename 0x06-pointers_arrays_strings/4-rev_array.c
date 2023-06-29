#include "main.h"
/**
 * reverse_array -  reverses the content of an array
 * @a: pointer to the fst el of array
 * @n: Number of elements in array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
int i, j, tmp;
for (i = n - 1, j = 0; j < n / 2; i--, j++)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
