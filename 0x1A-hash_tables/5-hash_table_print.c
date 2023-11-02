#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *curr;
unsigned long int ct = 0;
unsigned long int j;
if (ht == NULL)
return;
printf("{");
for (j = 0; j < ht->size; j++)
{
if (ht->array[j] != NULL)
{
curr = ht->array[j];
while (curr != NULL)
{
if (ct > 0)
printf(", ");
printf("'%s': '%s'", curr->key, curr->value);
curr = curr->next;
ct++;
}
}
}
printf("}\n");
}
