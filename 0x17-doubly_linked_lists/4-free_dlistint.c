#include "lists.h"

/**
 *free_dlistint - frees a list
 *@head: upointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *my_node, *next_node;

	my_node = head;

	while (my_node != NULL)
	{
		next_node = my_node->next;
		free(my_node);
		my_node = next_node;
	}
}
