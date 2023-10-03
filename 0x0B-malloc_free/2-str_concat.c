#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - a function that concatenates two strings
 *@s1: the first string
 *@s2: the second string
 *
 *Return: pointer to the new string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int length1 = 0;
	int length2  = 0;
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		length1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		length2++;
		j++;
	}
	new_str = malloc((length1 + length2 + 1) * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < length2; j++)
	{
		new_str[length1 + j] = s2[j];
	}
	new_str[length1 + length2] = '\0';

	return (new_str);
}
