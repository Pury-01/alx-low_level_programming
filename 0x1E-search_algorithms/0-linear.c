#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using linear searcch algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value
 *not present in an array or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
