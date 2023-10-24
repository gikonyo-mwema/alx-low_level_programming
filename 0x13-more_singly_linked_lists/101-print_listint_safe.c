#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - prints a singly linked list (can print lists with loop)
 * @head: head pointer of singly linked list
 *
 * Return: Number of elements in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *temp1;
	unsigned int count = 0;

	temp = head;
	if (temp == 0)
		return (0);
	while (temp != 0)
	{
		temp1 = temp;
		temp = temp->next;
		count++;
		printf("[%p] %d\n", (void *)temp1, temp1->n);
		if (temp1 <= temp)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
	}
	return (count);
}
