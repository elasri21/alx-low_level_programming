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
unsigned int i = 1, count = 0;
listint_t  *tmp = *head;
listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
newNode->n = n;
if (*head == NULL)
{
newNode->next = NULL;
*head = newNode;
return (newNode);
}
while (tmp->next != NULL)
{
count++;
tmp = tmp->next;
}
if (idx > count)
return (NULL);
else
{
tmp = *head;
while (i < idx)
{
tmp = tmp->next;
i++;
}
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = tmp->next;
tmp->next = newNode;
}
return (newNode);
}
