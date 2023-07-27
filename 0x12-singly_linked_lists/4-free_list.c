#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: list head
 * Return: Nothing
 */
void free_list(list_t *head)
{
list_t *curr = head;
while (curr != NULL)
{
list_t *tmp = curr->next;
free(curr);
curr = tmp;
}
}
