#include "lists.h"

/**
 *add_node - adds a new node at the begining of a list
 *@head: head of linked list
 *@str: string
 *Return: address of the new element, else NULL
 *if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t new_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	for (new_str = 0; str[new_str]; new_str++)
		;

		new_node->len =new_str;
		new_node->next = *head;
		*head = new_node;
		
		return (*head);
}
