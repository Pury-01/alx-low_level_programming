#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - creates an array of chars,
 *and initializes it with a specific char
 *
 *@size: number of bytes to be used
 *@c: character to be initialized
 *
 *Return: NULL if size is 0 or if it fails
 *else returns a pointer tothe array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}

