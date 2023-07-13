#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc -  allocates memory for an array
 * @nmemb: Number of elements
 * @size: size of each element
 * Return: array of nmemb elements
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
if (nmemb == 0 || size == 0)
return (NULL);
arr = malloc(nmemb * size);
if (arr == NULL)
return (NULL);
memset(arr, 0, nmemb * size);
return (arr);
}
