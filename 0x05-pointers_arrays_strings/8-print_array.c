#include "main.h"
#include <stdio.h>

/**
 *print_array - prints elements of an array of integers
 *@a: pointer to the integers
 *@n: number of elements of the array to be printed
 *Return: 0
 */

void print_array(int *a, int n)
{
	int elements_o_array;

	for (elements_o_array = 0; elements_o_array < n; elements_o_array++)
	{
		printf("%d", a[elements_o_array]);
		if (elements_o_array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
