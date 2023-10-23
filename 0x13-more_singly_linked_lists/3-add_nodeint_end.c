#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a list
 *@head: pointer to the address of the head of the linked list
 *@n: integer
 *
 *Return: address of the new element, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element, *last_node;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
		*head = new_element;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_element;
	}
	return (*head);
}
