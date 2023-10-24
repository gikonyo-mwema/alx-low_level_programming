#include "lists.h"
/**
 * free_listint - Free nodes and list
 * @head: head node
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
