#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elements in the array
 *
 *@size: size of each element
 *
 *Return: pointer to the newly allocated memory, NULL
 *if nmemb or size is 0 or if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *byt;
	void *ptr;
	unsigned int total_size = 0;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	byt = ptr;
	for (i = 0; i < total_size; i++)
	{
		byt[i] = 0;
	}
	return (ptr);
}
