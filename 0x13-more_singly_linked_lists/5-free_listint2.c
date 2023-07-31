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
if (*head == NULL || head == NULL)
{
printf("(nil)\n");
exit(1);
}
while (curr != NULL)
{
listint_t *tmp = curr;
curr = curr->next;
free(tmp);
}

*head = curr = NULL;
}
