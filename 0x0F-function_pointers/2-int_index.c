#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - returns index of the first element if no match
 *@array: an array of elements
 *@size: size of the number of elements in the array
 *@cmp: function that searches the integer
 *Return: -1 if no element matches or size <= 0, else 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
