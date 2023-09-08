#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *@min: minimum value of integer
 *@max: maximum value of integer
 *Return: pointer to newly created array, else NULL
 */

int *array_range(int min, int max)
{
	int i = 0;
	int total_elements;
	int *total;

	if (min > max)
	{
		return (NULL);
	}
	total_elements = max - min + 1;

	total = (int *)malloc(total_elements * sizeof(int));

	if (total == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_elements; i++)
	{
		total[i] = min + i;
	}
	return (total);
}






