#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * checkForLoops - check if loops
 * @head: list head
 * Return: number of node in the cycle
 */
size_t checkForLoops(const listint_t *head)
{
const listint_t *slowerPtr, *fasterPtr;
size_t numNode = 1;
if (head == NULL || head->next == NULL)
return (0);
slowerPtr = head->next;
fasterPtr = (head->next)->next;
while (slowerPtr != NULL && fasterPtr != NULL)
{
if (slowerPtr == fasterPtr)
{
slowerPtr = head;
while (slowerPtr != fasterPtr)
{
numNode++;
slowerPtr = slowerPtr->next;
fasterPtr = fasterPtr->next;
}
slowerPtr = slowerPtr->next;
while (slowerPtr != fasterPtr)
{
numNode++;
slowerPtr = slowerPtr->next;
}
return (numNode);
}
slowerPtr = slowerPtr->next;
fasterPtr = (fasterPtr->next)->next;
}
return (0);
}
/**
 * print_listint_safe - print a list
 * @head: list head
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t numNodes, i = 0;
numNodes = checkForLoops(head);
if (numNodes == 0)
{
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
numNodes++;
}
}
else
{
while (i < numNodes)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
i++;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (numNodes);
}
