#include "lists.h"
/**
 * sum_listint - returns sum of all the data
 * @head: head pointer
 *
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == 0)
	{
		return (0);
	}
	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
