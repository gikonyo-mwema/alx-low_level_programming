#include "lists.h"
/**
* sum_dlistint - returns sum of all data
* @head: head node
* Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
int total = 0;

while (head != NULL)
{
total += head->n;
head = head->next;
}
return (total);
}
