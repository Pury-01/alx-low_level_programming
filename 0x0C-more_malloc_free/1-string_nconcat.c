#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - function that concatenates two strings
 *@s1: first string
 *@s2: second string
 *
 *@n: number of bytes from s2 to be copied to  new string
 *Return: NULL if it fails,  else returns a pointer
 *to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int le1 = 0;
	unsigned int le2 = 0;
	unsigned int i = 0;

	while (s1[le1] != '\0')
	{
		le1++;
	}
	for (i = 0; s2[i] != '\0' && i < n; i++)
	{
		le2++;
	}
	new_string = malloc(le1  + le2 + 1);
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < le1; i++)
	{
		new_string[i] = s1[i];
	}
	for (i = 0; i < le2; i++)
	{
		new_string[le1 + i] = s2[i];
	}
	new_string[le1 + le2] = '\0';
	return (new_string);
}
