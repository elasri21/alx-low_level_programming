#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete at index given
 * @head: list head
 * @index: index to delete from
 * Return: 1 on succes. -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp;
unsigned int i = 0, len = 0;
if (*head == NULL)
return (-1);
if (index ==0)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
return (1);
}
tmp = *head;
while (tmp != NULL)
{
len++;
tmp = tmp->next;
}
if (index > len)
return (-1);
tmp = *head;
while (i < index)
{
i++;
tmp = tmp->next;
}
tmp->prev->next = tmp->next;
tmp->next->prev = tmp->prev;
free(tmp);
return (1);
}
