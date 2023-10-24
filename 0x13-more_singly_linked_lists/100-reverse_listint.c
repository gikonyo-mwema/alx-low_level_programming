#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head of singly linked list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i, *j;

	if (*head == 0)
		return (0);
	if ((*head)->next == 0)
		return (*head);
	i = *head;
	j = i->next;
	i->next = 0;
	while (1)
	{
		if (j->next == 0)
		{
			j->next = *head;
			*head = j;
			break;
		}
		i = j;
		j = i->next;
		i->next = *head;
		*head = i;
	}
	return (*head);
}
