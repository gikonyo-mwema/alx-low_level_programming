#include "lists.h"
/**
 * print_list - prints all elements fo a list
 * @h: linkedin list
 *
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	whle (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		n++;
		h = h->next;
	}
	return (n);
}
