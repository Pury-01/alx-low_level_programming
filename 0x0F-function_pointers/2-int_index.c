#include "function_pointers.h"

/**
 *int_index - function that searches for an integer
 *@array: an array of integers
 *@size: number of elements in the array array
 *@cmp: pointer to the function to be used to compare values
 *
 *Return: index of the first element if cmp does not return 0
 *-1 if size is less or equal to 0 and if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
