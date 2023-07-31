#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - add a new node to the list
 * @head: list head
 * @n: data to add
 * Return: new Node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
newNode = (listint_t *)malloc(sizeof(listint_t));
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);
}
