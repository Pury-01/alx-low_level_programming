#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a list
 *@head: a pointer to the address of the head of linked list
 *@n: integer
 *
 *Return: the address of the new element else NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (NULL);
	new_element->n = n;
	new_element->next = *head;

	*head = new_element;

	return (new_element);
}
