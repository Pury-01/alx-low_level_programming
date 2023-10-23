#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a node at a given
 *position
 *@head: pointer to the address of the head of the linked list
 *@idx: the index of the list where the new node should
 *be added
 *@n: the integer
 *
 *Return: address of the new node, NULL if it fails and if
 *it's impossible to add a new node at index idx
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (j = 0; temp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
