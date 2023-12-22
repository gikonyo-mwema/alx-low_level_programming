#include "hash_tables.h"
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
/**
* shash_table_create - Creates a sorted hash table.
* @size: The size of new sorted hash table.
* Return: If an error occurs - NULL.
*         Otherwise - a pointer to the new sorted hash table.
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht;
unsigned long int i;

ht = malloc(sizeof(shash_table_t));
if (!ht)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (!ht->array)
{
free(ht);
return (NULL);
}

for (i = 0; i < size; i++)
ht->array[i] = NULL;

ht->shead = NULL;
ht->stail = NULL;

return (ht);
}
/**
* shash_table_set - Adds or updates a key/value pair in a sorted hash table.
* @ht: The sorted hash table you want to add or update the key/value pair to.
* @key: The key of the key/value pair.
* @value: The value of the key/value pair.
* Return: 0
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
shash_node_t *new_node, *node;

if (!ht || !key || !*key || !value)
return (0);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

/* Check if key already exists in the hash table */
while (node)
{
if (!strcmp(node->key, key))
{
/* If key exists, update the value and return */
free(node->value);
node->value = strdup(value);
return (1);
}
node = node->next;
}

/* If key does not exist, create a new node */
new_node = malloc(sizeof(shash_node_t));
if (!new_node)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);

/* Insert the new node into the hash table */
new_node->next = ht->array[index];
ht->array[index] = new_node;

/* Insert the new node into the sorted linked list */
if (!ht->shead)
{
/* If list is empty, set the new node as the head and tail */
ht->shead = new_node;
ht->stail = new_node;
new_node->sprev = NULL;
new_node->snext = NULL;
}
else
{
/* If list is not empty, new node at the correct position */
node = ht->shead;
while (node && strcmp(node->key, key) < 0)
node = node->snext;

if (!node)
{
/* If the new node should be inserted at the end of the list */
new_node->sprev = ht->stail;
new_node->snext = NULL;
ht->stail->snext = new_node;
ht->stail = new_node;
}
else
{
/* If new node inserted in the middle or at the beginning of the list */
new_node->sprev = node->sprev;
new_node->snext = node;
if (node->sprev)
node->sprev->snext = new_node;
else
ht->shead = new_node;
node->sprev = new_node;
}
}

return (1);
}
/**
* shash_table_get - Retrieves a value with a key in a sorted hash table.
* @ht: The sorted hash table you want to look into.
* @key: The key you are looking for.
*
* Return: The value associated with the element,
* or NULL if key couldn’t be found.
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int index;
shash_node_t *node;

if (!ht || !key || !*key)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

while (node)
{
if (!strcmp(node->key, key))
return (node->value);
node = node->next;
}

return (NULL);
}

/**
* shash_table_print - Prints a sorted hash table.
* @ht: The sorted hash table.
*
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *node;
char *sep = "";

if (!ht)
return;

printf("{");

node = ht->shead;
while (node)
{
printf("%s'%s': '%s'", sep, node->key, node->value);
sep = ", ";
node = node->snext;
}

printf("}\n");
}
/**
* shash_table_print_rev - Prints a sorted hash table in reverse order.
* @ht: The sorted hash table.
*
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *node;
char *sep = "";

if (!ht)
return;

printf("{");

node = ht->stail;
while (node)
{
printf("%s'%s': '%s'", sep, node->key, node->value);
sep = ", ";
node = node->sprev;
}

printf("}\n");
}

/**
* shash_table_delete - Deletes a sorted hash table.
* @ht: The sorted hash table.
*/
void shash_table_delete(shash_table_t *ht)
{
unsigned long int i;
shash_node_t *node, *next_node;

if (!ht)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
next_node = node->next;
free(node->key);
free(node->value);
free(node);
node = next_node;
}
}

free(ht->array);
free(ht);
}
