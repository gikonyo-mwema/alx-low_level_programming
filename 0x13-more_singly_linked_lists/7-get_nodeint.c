#include "lists.h"
/**
 * get_nodeint_at_index - nth node
 * @head: head
 * @index: lists index
 *
 * Return: nth mode
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == 0)
		return (0);

	while (i  < index)
	{
		if (head == 0)
			return (0);
		head = head->next;

		i++;
	}
	return (head);
}
