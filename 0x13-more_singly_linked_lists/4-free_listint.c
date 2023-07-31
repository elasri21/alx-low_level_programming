#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a list
 * @head: list head
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
listint_t *curr = head;
while (curr != NULL)
{
listint_t *tmp = curr;
curr = curr->next;
free(tmp);
}
}
