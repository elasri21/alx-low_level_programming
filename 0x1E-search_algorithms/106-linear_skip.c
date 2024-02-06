#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_skip - searches for a value in a skip list
 * @list: haystack(list of integers)
 * @value: needle(an integer)
 * Return: NULL on failure. node containing the value on success
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *moving;
if (list == NULL)
return (NULL);
moving = list;
do {
list = moving;
moving = moving->express;
printf("Value checked at index ");
printf("[%d] = [%d]\n", (int)moving->index, moving->n);
} while (moving->express && moving->n < value);
if (moving->express == NULL)
{
list = moving;
while (moving->next)
moving = moving->next;
}
printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)list->index, (int)moving->index);
while (list != moving->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
if (list->n == value)
return (list);
list = list->next;
}
return (NULL);
}
