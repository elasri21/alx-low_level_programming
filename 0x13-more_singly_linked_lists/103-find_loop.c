#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - checks for a loop in the list
 * @head: list head
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *fasterPtr, *slowerPtr;
fasterPtr = head;
slowerPtr = head;
if (head == NULL)
return (NULL);
while (fasterPtr != NULL && slowerPtr != NULL && fasterPtr->next != NULL)
{
fasterPtr = (fasterPtr->next)->next;
slowerPtr = slowerPtr->next;
if (fasterPtr == slowerPtr)
{
slowerPtr = head;
while (slowerPtr != fasterPtr)
{
slowerPtr = slowerPtr->next;
fasterPtr = fasterPtr->next;
}
return (slowerPtr);
}
}
return (NULL);
}
