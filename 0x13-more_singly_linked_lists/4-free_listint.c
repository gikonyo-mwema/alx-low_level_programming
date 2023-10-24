#include "lists.h"
/**
 * free_listint - Free nodes and list
 * @head: head node
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		listint_t *t;

		t = head;
		free(t);
		head = head->next;
	}
}
