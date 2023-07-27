#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * createNewNode - create new node
 * @str: string
 * Return: node
 */
list_t *createNewNode(const char *str)
{
list_t *newNode = (list_t *)malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);
newNode->str = strdup(str);
newNode->len = strlen(str);
newNode->next = NULL;
return (newNode);
}
/**
 * add_node_end - add new node at the end
 * @head: the head
 * @str: string
 * Return: pointer to a node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode = createNewNode(str);
if (newNode == NULL)
return (NULL);
if (*head == NULL)
*head = newNode;
else
{
list_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = newNode;
}
return (newNode);
}
