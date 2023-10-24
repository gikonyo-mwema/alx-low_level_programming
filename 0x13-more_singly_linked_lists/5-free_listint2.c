#include "lists.h"
/**
 * free_listint2 - free nodes and list and set head to null
 * @head: head node
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head != 0)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}
}
