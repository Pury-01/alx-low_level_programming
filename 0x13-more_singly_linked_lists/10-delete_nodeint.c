#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index of a
 *linked list
 *@head: pointer to the address of the link list head
 *@index: index of the node that should be deleted
 *
 *Return: 1 if it succeeds, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *index_node = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (j < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		j++;
	}
	index_node = temp->next;
	temp->next = index_node->next;
	free(index_node);

	return (1);
}
