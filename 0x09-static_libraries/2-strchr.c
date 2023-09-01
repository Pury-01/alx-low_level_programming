#include "main.h"

/**
 *_strchr - locates a character string
 *@c: character being located
 *@s: string where c is searched
 *Return: s if c is found, else 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}

