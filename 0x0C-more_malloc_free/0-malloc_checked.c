#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - function that allocates memory
 *
 *@b: number of bytes being allocated
 *
 *Return: pointer to allocated memory, if it fails exit 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
