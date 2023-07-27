#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns num list el
 * @h: list head
 * Return: num list el
 */
size_t list_len(const list_t *h)
{
unsigned int i = 0;
const list_t *tmp, *new;
tmp = new = h;
while (new != NULL)
{
i++;
tmp = tmp->next;
new = tmp;
}
return (i);
}
