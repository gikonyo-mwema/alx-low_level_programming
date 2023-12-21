#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t;
	unsigned long int i;

	/* Allocate memory for the new hash structure */
	new_t = malloc(sizeof(hash_table_t));
	if (new_t == NULL)
		return (NULL);

	new_t->size = size;

	/* Allocate memory for the array within the hash table structure */
	new_t->array = malloc(sizeof(hash_node_t *) * size);
	if (new_t->array == NULL)
	{
		free(new_t);
		return (NULL);
	}

	/* Initialize all the elements of the array to NULL */
	for (i = 0; i < size; i++)
		new_t->array[i] = NULL;

	return (new_t);
}
