#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
#include "helper_func.c"
#include "helper_func2.c"

shash_node_t *create_pairs(const char *k, const char *v);
shash_node_t *no_collision_pair(shash_table_t *htable, const char *k,
const char *v, unsigned long int idx);
int override_value(shash_node_t *node, const char *v);
shash_node_t *insert_beg(shash_table_t *hash_t, const char *k, const char *v,
unsigned long int idx);
int init_list(shash_table_t *hash_t, shash_node_t *node);

int insert_before(shash_table_t *hash_t, shash_node_t *old,
shash_node_t *curr);
int insert_end(shash_table_t *hash_t, shash_node_t *node);


shash_table_t *shash_table_create(unsigned long int size);


/**
 * shash_table_set - insert a node
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
shash_node_t *newnode, *oldnode;
if (ht == NULL || key == NULL)
return (0);
idx = key_index((unsigned char *)key, ht->size);
newnode = ht->array[idx];
if (newnode == NULL)
newnode = no_collision_pair(ht, key, value, idx);
else
{
while (newnode != NULL)
{
if (strcmp(newnode->key, key) == 0)
return (override_value(newnode, value));
newnode = newnode->next;
}
newnode = insert_beg(ht, key, value, idx);
}
if (newnode == NULL)
return (0);
if (ht->shead == NULL)
return (init_list(ht, newnode));
oldnode = ht->shead;
while (oldnode != NULL)
{
if (strcmp(oldnode->key, newnode->key) >= 0)
return (insert_before(ht, oldnode, newnode));
oldnode = oldnode->snext;
}
return (insert_end(ht, newnode));
}

/**
 * shash_table_get - return a specific value
 * @ht: hash table
 * @key: the key
 * Return: the value associated with key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *node;
unsigned long int idx;
if (ht == NULL)
return (NULL);
if (key == NULL)
return (NULL);
idx = key_index((unsigned char *)key, ht->size);
if (ht->array[idx] == NULL)
return (NULL);
if (strcmp(ht->array[idx]->key, key) == 0)
return (ht->array[idx]->value);
node = ht->array[idx];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
shash_node_t *tmp = ht->shead;
unsigned long int ct = 0;
if (ht == NULL)
{
printf("\n")
return;
}
printf("{");
while (tmp != NULL)
{
if (ct > 0)
printf(", ");
printf("'%s': '%s'", tmp->key, tmp->value);
tmp = tmp->snext;
ct++;
}
printf("}\n");
}

/**
 * shash_table_print_rev - print a reversed hash table
 * @ht: hash table to be printed
 * Return: nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *tmp = ht->stail;
unsigned long int ct = 0;
if (ht == NULL)
return;
printf("{");
while (tmp != NULL)
{
if (ct > 0)
printf(", ");
printf("'%s': '%s'", tmp->key, tmp->value);
tmp = tmp->sprev;
ct++;
}
printf("}\n");
}


/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table tobe deleted
 * Return:nothing
 */

void shash_table_delete(shash_table_t *ht)
{
shash_node_t *tmp;
unsigned long int j = 0;
while (j < ht->size)
{
while (ht->array[j] != NULL)
{
tmp = ht->array[j]->next;
free(ht->array[j]->key);
free(ht->array[j]->value);
free(ht->array[j]);
ht->array[j] = tmp;
}
j++;
}
free(ht->array);
free(ht);
}
