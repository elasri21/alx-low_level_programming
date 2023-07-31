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
unsigned int i = 0, count = 0;
listint_t *newNode, *tmp = *head;
while (tmp != NULL)
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
newNode = (listint_t *)malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->next = tmp->next;
tmp->next = newNode;
}
return (newNode);
}
