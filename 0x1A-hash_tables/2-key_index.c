#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: the index of key/value pair  stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Compute hash value for the key using the djb2 hash function */
	hash_value = hash_djb2(key);

	/* Compute index for the key modulus of hash value with array size */
	return (hash_value % size);
}
