#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars
 *@size: refers to number of bytes used
 *@c: character
 *Return: NULL if size is 0, or pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;  /*initialize with specific char*/
	}
	return (arr);
}
