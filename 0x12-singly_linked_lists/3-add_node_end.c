#include "lists.h"

/**
 *add_node_end - adds a new node at the end of the list
 *@head: head of the node
 *@str: string of the linked list
 *Return: address of the new element, NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t new_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	for (new_str = 0; str[new_str]; new_str++)
		;
	new_node->len = new_str;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
