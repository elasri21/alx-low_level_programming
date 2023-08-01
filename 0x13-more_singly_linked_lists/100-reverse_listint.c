#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: list head
 * Return: list head
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *curr, *prev, *nextNode;
curr = nextNode = *head;
prev = NULL;
while (nextNode != NULL)
{
nextNode = nextNode->next;
curr->next = prev;
prev = curr;
curr = nextNode;
}
*head = prev;
return (*head);
}
