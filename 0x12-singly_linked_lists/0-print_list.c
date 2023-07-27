#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * print_list - prints list elements
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
unsigned int i = 0;
const list_t *tmp;
tmp = h;
while(tmp->next != NULL)
{
if (tmp->str == NULL)
{
printf("[0] (nil)\n");
i++;
}
else
{
printf("%s\n", tmp->str);
printf("%u\n", tmp->len);
i++;
}
tmp = tmp->next;
}
return (i);
}
