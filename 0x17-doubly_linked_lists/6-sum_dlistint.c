#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - calculates the sum of list data
 * @head: list head
 * Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *tmp;
if (head == NULL)
return (0);
tmp = head;
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
