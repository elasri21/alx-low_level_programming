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
tmp = *head;
if (index == 0 && (*head)->next)
{
*head = (*head)->next;
(*head)->prev = NULL;
free(tmp);
}
else if (index == 0 && (*head)->next == NULL)
free(tmp);
else
{
while (tmp != NULL)
{
len++;
tmp = tmp->next;
}
if (index > len)
return (-1);
if (index == len)
{
free(tmp);
return (1);
}
tmp = *head;
while (i < index)
{
i++;
tmp = tmp->next;
}
tmp->prev->next = tmp->next;
tmp->next->prev = tmp->prev;
free(tmp);
}
return (1);
}
