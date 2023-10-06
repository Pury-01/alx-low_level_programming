#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - function that creates an array of integers
 *@min: minimum value of integer
 *@max: maximum value of integer
 *
 *Return: NULL if min is greater than max or if malloc
 *fails, else pointer to newly allocated array
 */

int *array_range(int min, int max)
{
	int *integers;
	int total_elements;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	total_elements = max - min + 1;
	integers = malloc(total_elements * sizeof(int));
	if (integers == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_elements; i++)
	{
		integers[i] = min + i;
	}
	return (integers);
}



