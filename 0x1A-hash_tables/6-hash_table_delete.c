#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
* @ht: the hash table
*
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node, *next_node;

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
