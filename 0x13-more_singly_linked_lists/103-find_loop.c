#include "lists.h"

/**
 *find_listint_loop - finds the loop in a linked list
 *@head: pointer to the head of the linked list
 *
 *Return: the address of the node where the loop starts
 *NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head, *two = head;

	while (one != NULL && two != NULL && two->next != NULL)
	{
		one = head->next;
		two = (head->next)->next;

		if (one == two)
		{
			one = head;
			while (one != two)
			{
				one = one->next;
				two = two->next;
			}
			return (one);
		}
		one = one->next;
		two = (two->next)->next;
	}
	return (NULL);
}
