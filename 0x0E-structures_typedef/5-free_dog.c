#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - dree a memory
 * @d: structure pointer
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
free(d);
}
