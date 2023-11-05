#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * insert_before - insert a node before another
 * @hash_t: hash table
 * @old: old node
 * @curr: node to insert
 * Return: 1
 */

int insert_before(shash_table_t *hash_t, shash_node_t *old, shash_node_t *curr)
{
if (old->sprev == NULL)
hash_t->shead = curr;
curr->snext = old;
curr->sprev = old->sprev;
old->sprev = curr;
if (curr->sprev != NULL)
curr->sprev->snext = curr;
return (1);
}


/**
 * insert_end - insert a the end of the list
 * @hash_t: hash table
 * @node: node to be inserted
 * Return: 1
 */
int insert_end(shash_table_t *hash_t, shash_node_t *node)
{
shash_node_t *last_node = hash_t->stail;
hash_t->stail = node;
node->snext = NULL;
node->sprev = last_node;
last_node->snext = node;
return (1);
}

/**
 * shash_table_create - creates sorted hash table
 * @size: table size
 * Return: hash table created
 */
shash_table_t *shash_table_create(unsigned long int size)
{
unsigned int j;
shash_table_t *hash_t = (shash_table_t *)malloc(sizeof(shash_table_t));
if (hash_t == NULL)
return (NULL);
hash_t->size = size;
hash_t->shead = NULL;
hash_t->stail = NULL;
hash_t->array = (shash_node_t **)malloc(sizeof(shash_node_t) * size);
if (hash_t->array == NULL)
{
free(hash_t);
return (NULL);
}
for (j = 0; j < size; j++)
hash_t->array[j] = NULL;
return (hash_t);
}
