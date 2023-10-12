#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at index given
 * @head: list head
 * @index: pos of node to get
 * Return: a node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *node, *tmp;
size_t length = 0;
if (head == NULL)
return (NULL);
tmp = head;
while (tmp != NULL)
{
length++;
tmp = tmp->next;
}
if (index > length)
return (NULL);
tmp = head;
while (i < index)
{
i++;
tmp = tmp->next;
}
node = tmp;
return (node);
}
