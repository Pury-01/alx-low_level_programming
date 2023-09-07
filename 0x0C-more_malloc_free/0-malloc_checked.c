#include "main.h"
#include "stdlib.h"

/**
 *malloc_checked - allocates memory
 *@b: variable being pointed at
 *Return: pointer to the allocated memory else 98
 */

void *malloc_checked(unsigned int b)
{
	void *btr;

	btr = malloc(b);

	if (btr == NULL)
	{
		exit(98);
	}
	return (btr);
}
