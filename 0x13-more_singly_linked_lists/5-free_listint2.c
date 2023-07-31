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
listint_t *curr = *head, *tmp;
while (curr != NULL)
{
tmp = curr;
curr = curr->next;
free(tmp);
}
*head = NULL;
}
