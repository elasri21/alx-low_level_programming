#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: list head
 * @index: index of the node
 * Return: node. NULL on failare
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0, i = 1;
listint_t *tmp = head;
while (tmp->next != NULL)
{
count++;
tmp = tmp->next;
}
if (index > count)
return (NULL);
else
{
tmp = head;
while (i < index)
{
tmp = tmp->next;
i++;
}
return (tmp);
}
}
