#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - calculate the list length
 * @h: list head
 * Return: length of the list
 */
size_t listint_len(const listint_t *h)
{
unsigned int length = 0;
const listint_t *tmp;
tmp = h;
if (h == NULL)
return (0);
while (tmp != NULL)
{
length++;
tmp = tmp->next;
}
return (length);
}
