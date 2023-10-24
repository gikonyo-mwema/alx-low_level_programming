#include "lists.h"

/**
 * add_nodeint_end - Add a new node itn the end
 * @head: my struct
 * @n: input
 * Return: address to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *end = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (new_node);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new_node;
	return (*head);
}
