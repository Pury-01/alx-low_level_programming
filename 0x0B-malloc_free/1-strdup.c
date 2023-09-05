#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_strdup - duplicates a string
 *@str: original string
 *Return: NULL for null str else a pointer to new string
 */

char *_strdup(char *str)
{
	unsigned int length = 0;
	char *new_str;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	new_str = malloc(length + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		new_str[i] = str[i];
	}
	return (new_str);
}


