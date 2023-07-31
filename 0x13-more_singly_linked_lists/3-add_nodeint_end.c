#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add node a the end
 * @head: list head
 * @n: data to add
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp = *head;
listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
tmp = *head = newNode;
}
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = newNode;
}
if (tmp == NULL)
return (NULL);
else
return (newNode);
}
