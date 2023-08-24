#include "main.h"

/**
 *compares two strings
 *@s1: string for comparison
 *@s2: second string for comparison
 *Return: 0 if equal,else greater than or less than other
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] !=  s2[i])
		{
			return (s1[i] - s2[i]);
		} i++;
	}
	return (s1[i] - s2[i]);
}
