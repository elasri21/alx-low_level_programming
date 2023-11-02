#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to delete
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *tmp;
unsigned long int i = 0;
while (i < ht->size)
{
while (ht->array[i] != NULL)
{
tmp = ht->array[i]->next;
free(ht->array[i]->key);
free(ht->array[i]->value);
free(ht->array[i]);
ht->array[i] = tmp;
}
i++;
}
free(ht->array);
free(ht);
}
