#include "lists.h"
/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
* @head: first node
* @index: number of each node
* Return: nth node, otherwise 0
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head != NULL)
{
if (i == index)
{
return (head);
}
i++;
head = head->next;
}
return (NULL);
}
