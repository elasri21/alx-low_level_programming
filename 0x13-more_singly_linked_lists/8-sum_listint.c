#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sums data
 * @head: list head
 * Return: sum. 0 on failure
 *
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tmp = head;
if (head == NULL)
return (0);
else
{
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
}
return (sum);
}
