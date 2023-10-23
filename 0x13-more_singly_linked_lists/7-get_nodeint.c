#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a linked list
 *@head: pointer to the head of the linked list
 *@index: index of the node
 *
 *Return: nth node of a linked list, NULL if
 *the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}
	return (temp ? temp : NULL);
}
