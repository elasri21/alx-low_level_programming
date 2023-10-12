#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
if (head == NULL)
return;
tmp = head;
while (tmp != NULL)
{
head = tmp->next;
head->prev = NULL;
free(tmp);
tmp = head;
}
}
