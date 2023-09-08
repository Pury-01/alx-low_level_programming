#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array
 *@nmemb: elements in an array
 *@size: bytes each element contains
 *Return: pointer to the allocated memory, else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total;
	void *cal;
	unsigned char *acall;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = nmemb * size;

	cal = malloc(total);

	if (cal == NULL)
	{
		return (NULL);
	}
	acall = (unsigned char *)cal;

	for (i = 0; i < total; i++)
	{
		acall[i] = 0;
	}
	return (cal);
}
