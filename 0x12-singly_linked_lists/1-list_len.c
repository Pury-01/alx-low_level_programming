#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list
 *@h: the linked list
 *
 *Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t no_elements;

	no_elements = 0;
	while (h != NULL)
	{
		h = h->next;
		no_elements++;
	}
	return (no_elements);
}
