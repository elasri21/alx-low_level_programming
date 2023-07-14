#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the prev memory
 * @old_size: size of ptr
 * @new_size: new size
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int cz;
void *p;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
return (malloc(new_size));
if (new_size == old_size)
return (ptr);
p = malloc(new_size);
if (p == NULL)
return (NULL);
cz = (old_size > new_size) ? new_size : old_size;
memcpy(p, ptr, cz);
free(ptr);
return (p);
}
