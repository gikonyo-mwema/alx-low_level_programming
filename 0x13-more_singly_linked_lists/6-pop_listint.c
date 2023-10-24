#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the head node
 * @head: first node
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *temp;
	int n;

	if (head == 0 || tmp == 0)
		return (0);

	temp = tmp->next;
	n = tmp->n;
	free(tmp);
	*head = temp;
	return (n);
}
