#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the table
 * Return: a pointer to the table created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned int j = 0;
hash_table_t *hash_t = (hash_table_t *)malloc(sizeof(hash_table_t));
if (hash_t == NULL)
return (NULL);
hash_t->size = size;
hash_t->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
if (hash_t->array == NULL)
{
free(hash_t);
return (NULL);
}
for (; j < size; j++)
hash_t->array[j] = NULL;
return (hash_t);
}
