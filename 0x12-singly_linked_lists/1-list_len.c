#include "lists.h"

/**
 * list_len - count number of elements
 * @h:  linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}

	return (elem);
}
