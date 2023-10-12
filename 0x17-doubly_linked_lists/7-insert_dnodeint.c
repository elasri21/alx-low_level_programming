#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - add a new node at index
 * @h: list head;
 * @idx: index to insert new node
 * @n: data of the new node
 * Return: address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int len = 0, i = 0;
dlistint_t *tmp, *new;
new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = NULL;
if (*h == NULL)
add_dnodeint(h, n);
tmp = *h;
while (tmp != NULL)
{
len++;
tmp = tmp->next;
}
if (idx >= len)
return (NULL);
if (idx == len - 1)
add_dnodeint_end(h, n);
tmp = *h;
while (i < idx - 1)
{
i++;
tmp = tmp->next;
}
new->prev = tmp;
new->next = tmp->next;
tmp->next = new;
new->next->prev = new;
return (new);
}
