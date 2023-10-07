#include "main.h"

/**
 * _realloc - allocate memory and set all values to 0
 * @ptr: pointer to previous mem
 * @old_size: size of previously allocated
 * @new_size: pointer to reallocated memory
 *
 * Return: pointer to reallocated mem
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int j;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	for (j = 0; j < old_size && new_size; j++)
		*((char *)p + j) = *((char *)ptr + j);
	free(ptr);

	return (p);
}
