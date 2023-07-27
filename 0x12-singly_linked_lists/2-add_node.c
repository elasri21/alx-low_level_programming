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
newNode->str = strdup( str);
newNode->len = strlen(str);
newNode->next = NULL;
return newNode;
}
/** add_node - creates a new node
 * head: pointer
 * @str: string
 * Return: A pointer
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode = createNewNode(str);
newNode->next = *head;
*head = newNode;
return (newNode);
}
