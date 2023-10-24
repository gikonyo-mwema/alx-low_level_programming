#include "lists.h"
#include <stddef.h>

/**
 *  insert_nodeint_at_index - inserts a new node at a given position
 *  @head: first node
 *  @idx: where new node should be added
 *  @n: integer
 *  Return: address new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *c_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	for (; count < idx - 1; count++)
	{
		c_node = c_node->next;
		if (c_node == NULL && idx - count > 0)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = c_node->next;
	c_node->next = new_node;
	return (new_node);
}
