#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - print all elements of list
 *
 * @h: pointer to head
 *
 * Return: no. of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int s = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
