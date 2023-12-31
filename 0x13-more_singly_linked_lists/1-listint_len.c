#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked list
 *@h: pointer to the head of the linked list
 *
 *Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}

