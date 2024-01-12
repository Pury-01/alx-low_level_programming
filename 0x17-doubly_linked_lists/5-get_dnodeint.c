#include "lists.h"

/**
 *get_dnodeint_at_index - gets the nth node of a list
 *@head: pointer to the head of a node
 *@index: the index of the node
 *
 *Return: nth node of a list, NULL if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	current = head;

	for (i = 0; current != NULL && i < index; i++)
		current = current->next;

	return (current);
}
