#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node
 * @head: list head
 * @index: index to delete from
 * Return: 1 on success. 0 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *nextNode;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
tmp = *head;
*head = tmp->next;
free(tmp);
return (1);
}
tmp = *head;
while (tmp != NULL && i < index - 1)
{
tmp = tmp->next;
i++;
}
nextNode = tmp->next;
tmp->next = nextNode->next;
free(nextNode);
return (1);
}
