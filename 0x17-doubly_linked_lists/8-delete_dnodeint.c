#include "lists.h"
#include <stdlib.h>
/**
* delete_dnodeint_at_index - deletes the node at index
* @head: head node
* @index: location of node
*
* Return: 1 on success, -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i;

if (head == NULL || *head == NULL)
{
return (-1);
}

current = *head;

for (i = 0; i < index; i++)
{
if (current == NULL)
{
return (-1);
}
current = current->next;
}

if (index == 0)
{
*head = current->next;
if (current->next != NULL)
{
current->next->prev = NULL;
}
}
else
{
current->prev->next = current->next;
if (current->next != NULL)
{
current->next->prev = current->prev;
}
}

free(current);

return (1);
}
