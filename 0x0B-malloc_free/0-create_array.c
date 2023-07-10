#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array
 * @size: the size of the array
 * @c: character to fill array with
 * Return: array of characters
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *t;
if (size == 0)
return (NULL);
t = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
t[i] = c;
}
return (t);
}
