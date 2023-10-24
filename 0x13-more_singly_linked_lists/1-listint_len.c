#include "lists.h"
/**
 * listint_len - return no of elements
 *
 * @h: head node
 *
 * Return: no fo elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int index = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		index += 1;
		h = h->next;
	}
	return (index);
}
