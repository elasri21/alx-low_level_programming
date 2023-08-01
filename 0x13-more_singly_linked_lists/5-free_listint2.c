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
if (curr == NULL)
{
head = NULL;
return;
}
while (curr != NULL)
{
listint_t *tmp;
tmp = curr;
curr = curr->next;
free(tmp);
}
*head = NULL;
head = NULL;
}
