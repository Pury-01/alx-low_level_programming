#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: pointer to the address of the head of the linked list
 *
 *Return: head node's data (n), 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
