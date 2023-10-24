#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * find_listint_loop - finds address of starting node in looped linked list
 * @head: pointer to the head in linked list to test
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h, *t;

	if (!head)
		return (NULL);
	h = t = h;
	while (t && h && h->next)
	{
		t = t->next;
		h = (h->next)->next;
		if (h == t)
		{
			t = head;
			while (t && h)
			{
				if (t == h)
					return (t);
				t = t->next;
				h = h->next;
			}
		}
	}
	return (NULL);
}
