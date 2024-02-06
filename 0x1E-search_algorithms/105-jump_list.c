#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_list -  searches for a value in a sorted list of integers
 * @list: haystack(a list of integers) 
 * @size: size of the list
 * @value: needle(an integer)
 * Return: NULL on failure. node containing the value on success
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t idx, k, m;
listint_t *prv;
if (list == NULL || size == 0)
return (NULL);
m = (size_t)sqrt((double)size);
idx = 0;
k = 0;
do {
prv = list;
k++;
idx = k * m;
while (list->next && list->index < idx)
list = list->next;
if (list->next == NULL && idx != list->index)
idx = list->index;
printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);
} while (idx < size && list->next && list->n < value);
printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)prv->index, (int)list->index);
for (; prv && prv->index <= list->index; prv = prv->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)prv->index, prv->n);
if (prv->n == value)
return (prv);
}
return (NULL);
}
