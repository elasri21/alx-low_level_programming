#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: list head
 * Return: node data. 0 on fail
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *tmp = *head;
if (tmp == NULL)
return (0);
*head = (*head)->next;
n = tmp->n;
free(tmp);
return (n);
}
