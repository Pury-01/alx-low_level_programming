#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: string being pointed
 *@accept: prefix substring being considered
 *Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		int a_set = 0;
		char *x = accept;

		while (*x != '\0')
		{
			if (*s == *x)
			{
				a_set =  1;
			}
			x++;
		}
		if (a_set == 0)
		{
			return (length);
		}
		length++;
		s++;
	}
	return (length);
}
