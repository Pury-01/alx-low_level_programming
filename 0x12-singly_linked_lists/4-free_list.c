#include "lists.h"

/**
 *free_list - function that frees a list
 *@head: head of the node
 *
 *Return: nothing
 */

void free_list(list_t *head)
{
	list_t *list;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list->str);
		free(list);
	}
}
