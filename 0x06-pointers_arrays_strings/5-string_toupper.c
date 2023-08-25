#include "main.h"

/**
 *string_toupper - changes all lowercase leteers to uppercase
 *@c: input string
 *Return: c
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
		c[i] = c[i] - 'a' + 'A';
		}
		i++;
	}

	return (c);
}
