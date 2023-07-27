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
list_t *nextNode;
while (curr != NULL)
{
nextNode = curr->next;
free(curr);
curr = nextNode;
}
}
