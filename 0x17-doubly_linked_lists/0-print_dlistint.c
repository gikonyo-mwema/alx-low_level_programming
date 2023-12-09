#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_dlistint - prints all the elements of doubly linked list
* @h: pointer to the head of the list
* Return: no of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}
