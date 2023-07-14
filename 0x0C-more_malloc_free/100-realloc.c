#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the prev memory
 * @old_size: size of ptr
 * @new_size: new size
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (old_size == new_size)
return (ptr);
if (ptr == NULL)
ptr = malloc(new_size);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size > old_size)
ptr = malloc(new_size);
return (ptr);
}
