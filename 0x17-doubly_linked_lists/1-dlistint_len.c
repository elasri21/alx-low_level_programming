#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - counts the number of elements
 * @h: list head
 * Return: integer
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t length = 0;
const dlistint_t *tmp = h;
if (h == NULL)
return (0);
while (tmp != NULL)
{
length++;
tmp = tmp->next;
}
return (length);
}
