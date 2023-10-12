#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints list elements
 * @h: list head
 * Return: integer
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *tmp = h;
size_t length = 0;
if (h == NULL)
return (0);
while(tmp != NULL)
{
length++;
printf("%d\n", tmp->n);
tmp = tmp->next;
}
return (length);
}
