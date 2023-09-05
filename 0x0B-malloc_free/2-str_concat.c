#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 @s1: pointer to the first string
 @s2: pointer to the second string
 *Return: pointer to new space in memory, else NULL
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = 0;
	size_t len2 = 0;
	char *new_str;
	size_t i = 0;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	new_str = (char *)malloc(len1 + len2 + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		new_str[len1 + i] = s2[i];
	}
	new_str[len1 + len2] = '\0';

	return (new_str);
}



