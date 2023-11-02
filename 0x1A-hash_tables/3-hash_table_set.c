#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_node - creates a node
 * @k: the key
 * @v: the value
 * Return: the created node
 */
hash_node_t *create_node(const char *k, const char *v)
{
hash_node_t *newnode = (hash_node_t *)malloc(sizeof(hash_node_t));
if (newnode == NULL)
return (NULL);
newnode->key = (char *)malloc(strlen(k) + 1);
if (newnode->key == NULL)
return (NULL);
newnode->value = (char *)malloc(strlen(v) + 1);
if (newnode->value == NULL)
return (NULL);
strcpy(newnode->key, k);
strcpy(newnode->value, v);
return (newnode);
}

/**
 * no_collision - append elementas first array element
 * @hash_t: hash table to work with
 * @k: the key to manipulate
 * @v: the value associated with k
 * @idx: index generated using the k
 * Return: 1 on successs. 0 on failure
 */
int no_collision(hash_table_t *hash_t, const char *k, const char *v,
unsigned long int idx)
{
hash_node_t *newnode = create_node(k, v);
if (newnode == NULL)
return (0);
newnode->next = NULL;
hash_t->array[idx] = newnode;
return (1);
}

/**
 * hash_table_set - adds an element to the hash table @ht
 * @ht: table to add element
 * @key: the key of the element
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
hash_node_t *newnode;
if (ht == NULL || key == NULL)
return (0);
idx = key_index((unsigned char *)key, ht->size);
newnode = ht->array[idx];
if (newnode == NULL)
return (no_collision(ht, key, value, idx));
while (newnode != NULL)
{
if (strcmp(newnode->key, key) == 0)
{
if (strcmp(newnode->value, value) == 0)
return (1);
free(newnode->value);
newnode->value = malloc(strlen(value) + 1);
if (newnode->value == NULL)
return (0);
strcpy(newnode->value, value);
return (1);
}
newnode = newnode->next;
}
if (newnode == NULL)
{
newnode = create_node(key, value);
if (newnode == NULL)
return (0);
newnode->next = ht->array[idx];
ht->array[idx] = newnode;
return (1);
}
return (0);
}
