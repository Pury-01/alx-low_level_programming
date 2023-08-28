#include "main.h"

/**
 *_strchr - locates a character string
 *@c: character being located
 *@s: string where c is searched
 *Return: &s[i] if c is found, else 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}

