#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - copies a string
 *@str: pointer of the string copy
 *
 *Return: a pointer to newly allocated space in memory
 *which contains a copy of the string given as parameter
 */
char *_strdup(char *str)
{
	int length = 0;
	int i = 0;
	char *str2;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	str2 = malloc((length + 1) * sizeof(char));

	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		str2[i] = str[i];
	}
	str2[i] = '\0';
	return (str2);

	free(str2);
}
