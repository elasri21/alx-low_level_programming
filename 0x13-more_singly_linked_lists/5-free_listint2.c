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
if (*head != NULL)
{
listint_t *curr = *head;
while (curr != NULL)
{
listint_t *tmp = curr;
curr = curr->next;
free(tmp);
}
}
*head = NULL;
}
