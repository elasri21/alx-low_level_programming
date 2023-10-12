#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - adds a node to the list
 * @head: list head
 * @n: list data
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *tmp, *new;
new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
new->prev = NULL;
if (*head == NULL)
*head = tmp = new;
else
{
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
new->prev = tmp;
tmp->next = new;
}
return (new);
}
