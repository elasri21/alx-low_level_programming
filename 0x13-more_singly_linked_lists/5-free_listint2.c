#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - free list
 * @head: list head
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
listint_t *curr = *head;
listint_t *tmp = NULL;
if (head == NULL || *head == NULL)
return;
*head = NULL;
while (curr != NULL)
{
tmp = curr->next;
free(curr);
curr = tmp;
}
}
