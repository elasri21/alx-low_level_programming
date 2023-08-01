#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - print a list
 * @head: list head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *tmp;
size_t count = 0;
tmp = head;
while (tmp != NULL)
{
printf("[%p] %d\n", (void *)tmp, tmp->n);
count++;
if (tmp <= tmp->next)
{
printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
exit(98);
}
tmp = tmp->next;
}
return (count);
}
