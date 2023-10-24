#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list (can free lists with a loop)
 * @h: pointer to head of singly linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = *h, *temp2;
	unsigned int count = 0;

	if (temp == 0 || h == 0)
		return (0);
	temp = *h;
	while (temp != 0)
	{
		temp2 = temp;
		temp = temp->next;
		count++;
		free(temp2);
		if (temp2 <= temp)
			break;
	}
	*h = 0;
	return (count);
}
