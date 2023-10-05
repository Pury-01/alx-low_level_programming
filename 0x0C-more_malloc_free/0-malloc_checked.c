#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - function that allocates memory
 *
 *@b: variable being allocated memory for
 *
 *Return: pointer to allocated memory, if it fails exit 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = &b;

	ptr = malloc(sizeof(unsigned int));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

