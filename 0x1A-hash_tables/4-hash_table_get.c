#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table to work with
 * @key: key to get its value
 * Return: value associated with provided key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *curr_node;
if (ht == NULL)
return (NULL);
if (key == NULL)
return (NULL);
idx = key_index((unsigned char *)key, ht->size);
if (ht->array[idx] == NULL)
return (NULL);
if (strcmp(ht->array[idx]->key, key) == 0)
return (ht->array[idx]->value);
curr_node = ht->array[idx];
while (curr_node != NULL)
{
if (strcmp(curr_node->key, key) == 0)
return (curr_node->value);
curr_node = curr_node->next;
}
return (NULL);
}
