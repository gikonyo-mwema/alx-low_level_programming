#include "lists.h"
/**
* dlistint_len - number of elements
* @h: pointer to head
* Return: no of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
h = h->next;
nodes++;
}
return (nodes);
}
