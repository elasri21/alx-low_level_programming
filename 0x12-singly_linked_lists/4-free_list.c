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
while (head != NULL)
{
list_t *tmp = head;
head = head->next;
free(tmp);
}
}
