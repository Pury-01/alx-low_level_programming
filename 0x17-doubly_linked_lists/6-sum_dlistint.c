#include "lists.h"

/**
 *sum_dlistint - sums all the data of a doubly linked list
 *@head: pointer to the head of the list
 *
 *Return: sum of all the data of a linked list
 *0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
