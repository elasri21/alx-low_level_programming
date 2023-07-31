#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print list elements
 * @h: list head
 * Return: length of the list
 */
size_t print_listint(const listint_t *h)
{
size_t size = 0;
const listint_t *tmp;
tmp = h;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
size++;
tmp = tmp->next;
}
return (size);
}
