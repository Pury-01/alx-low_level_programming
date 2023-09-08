#include "main.h"
#include <stdlib.h>

/**
 *_realloc - reallocates a memory block
 *@ptr: pointer to memory previously allocated
 *@old_size: size in bytes of the allocated space for ptr
 *@new_size: size in bytes of the new memory block
 *Return: ptr if new_size is equal to old_size, else NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *trr;
	unsigned int check;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	trr = malloc(new_size);

	if (trr == NULL)
	{
		return (NULL);
	}

	check = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < check; i++)
	{
		((char *)trr)[i]  = ((char *)ptr)[i];
	}
	free(ptr);
	return (trr);
}
