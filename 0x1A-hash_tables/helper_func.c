#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_pairs - creates a newnode
 * @k: the key
 * @v: the value
 * Return: created node
 */
shash_node_t *create_pairs(const char *k, const char *v)
{
shash_node_t *newnode = (shash_node_t *)malloc(sizeof(shash_node_t));
if (newnode == NULL)
return (NULL);
newnode->key = malloc(strlen(k) + 1);
if (newnode->key == NULL)
{
free(newnode);
return (NULL);
}
newnode->value = malloc(strlen(v) + 1);
if (newnode->value == NULL)
{
free(newnode->key);
free(newnode);
return (NULL);
}
strcpy(newnode->key, k);
strcpy(newnode->value, v);
return (newnode);
}

/**
 * no_collision_pair - adds the node to the table if no collision
 * @htable: the table
 * @k: the key
 * @v: the value
 * @idx: index to insert the node
 * Return: node created
 */
shash_node_t *no_collision_pair(shash_table_t *htable, const char *k,
const char *v, unsigned long int idx)
{
shash_node_t *newnode = create_pairs(k, v);
if (newnode == NULL)
return (NULL);
newnode->next = NULL;
htable->array[idx] = newnode;
return (newnode);
}

/**
 * override_value - updates the value of a given node
 * @node: node to work with
 * @v: the new value
 * Return: 1 on success.0 otherwise
 */
int override_value(shash_node_t *node, const char *v)
{
if (strcmp(node->value, v) == 0)
return (1);
free(node->value);
node->value = malloc(strlen(v) + 1);
if (node->value == NULL)
return (0);
strcpy(node->value, v);
return (1);
}

/**
 * insert_beg - insert a node sfter a given index
 * @hash_t: hash table
 * @k: the key
 * @v: the value
 * @idx: index
 * Return: the inserted node
 */
shash_node_t *insert_beg(shash_table_t *hash_t, const char *k,
const char *v, unsigned long int idx)
{
shash_node_t *curr = create_pairs(k, v);
if (curr == NULL)
return (NULL);
curr->next = hash_t->array[idx];
hash_t->array[idx] = curr;
return (curr);
}

/**
 * init_list - initializes a list
 * @hash_t: hash table
 * @node: first node in the list node
 * Return: 1
 */
int init_list(shash_table_t *hash_t, shash_node_t *node)
{
node->sprev = NULL;
node->snext = NULL;
hash_t->shead = node;
hash_t->stail = node;
return (1);
}
