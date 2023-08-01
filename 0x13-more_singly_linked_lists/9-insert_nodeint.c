#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - add a node at index
 * @head: list head
 * @idx: index to insert node
 * @n: data
 * Return: inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t  *tmp, *newNode;
newNode = (listint_t *)malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
*head = newNode;
return (newNode);
}
if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}
tmp = *head;
while (tmp != NULL && i < idx - 1)
{
tmp = tmp->next;
i++;
}
if (tmp == NULL)
return (NULL);
newNode->next = tmp->next;
tmp->next = newNode;
return (newNode);
}
