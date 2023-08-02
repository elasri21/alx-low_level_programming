#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a list with a loop
 * @h: list head
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *tmp;
int i;
size_t size = 0;
if (h == NULL || *h == NULL)
return (0);
while (*h != NULL)
{
i = *h - (*h)->next;
if (i > 0)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
size++;
}
else
{
free(*h);
*h = NULL;
size++;
break;
}
}
*h = NULL;
return (size);
}
