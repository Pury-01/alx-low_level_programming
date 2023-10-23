#include "lists.h"

/**
 *free_listint - frees a list
 *@head: pointer to the head of the linked list
 *
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
