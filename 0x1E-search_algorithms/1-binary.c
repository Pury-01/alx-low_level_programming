#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of
 *integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search
 *@size: number of elements in the array
 *@value: value to search for
 *
 * Return: index where value is located otherwise -1 if value
 *not present or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t mid;
	size_t high = size - 1;
	size_t i;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
			{
				printf("%d, ", array[i]);
			}
		}
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
