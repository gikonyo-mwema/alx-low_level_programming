#include "lists.h"
#include <stdlib.h>
/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: Double pointer to the head of the list.
* @n: no of nodes
* @idx: The index of the node that should be deleted. Index starts at 0.
* Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current = *h;
unsigned int i = 0;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;

if (idx == 0)
{
new_node->next = *h;
new_node->prev = NULL;
if (*h != NULL)
{
(*h)->prev = new_node;
}
*h = new_node;
return (new_node);
}
while (current != NULL && i < idx)
{
if (i == idx - 1)
{
new_node->next = current->next;
new_node->prev = current;
if (current->next != NULL)
{
current->next->prev = new_node;
}
current->next = new_node;
return (new_node);
}
i++;
current = current->next;
}
free(new_node);
return (NULL);
}

