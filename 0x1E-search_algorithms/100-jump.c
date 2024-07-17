#include "search_algos.h"

/**
 * jump_search - searchees for a value in a sorted array of
 * integers using the jump search algorithm
 *
 * @array: pointer too tthe first element of the array to
 * search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: first index where value is located otherwise -1 if
 *value is not present or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i = 0;
	size_t j = 0;
	size_t end = 0;

	if (array == NULL)
		return (-1);

/* jump through the array in steps */
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prev = i;
		i += step;
	}
/* print the range being searched */
	end = (i < size ? i : size - 1);

	printf("Value found between indexes [%lu] and [%lu]\n", prev, end);

	j = prev;

	for (j = prev; j < size && j  <= i; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
