#include "lists.h"
#include <stdlib.h>
/**
* add_dnodeint - add new node at the beginning of a list
* @head: pointer to first node
* @n: nth node
* Return: address to new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *n_node;

n_node = malloc(sizeof(dlistint_t));
if (n_node == NULL)
{
return (NULL);
}
n_node->n = n;
n_node->prev = NULL;
n_node->next = *head;

if (*head != NULL)
{
(*head)->prev = n_node;
}
*head = n_node;

return (n_node);
}
