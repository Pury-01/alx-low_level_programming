#include "main.h"

/**
 *_strpbrk - locates the first occurence of bytes in a string
 *@s: main string
 *@accept: string where bytes are located
 *Return: return s if bytes are found, else 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *x = accept;

		while (*x != '\0')
		{
			if (*s == *x)
			{
				return (s);
			}
			x++;
		}
		s++;
	}
	return (0);
}
