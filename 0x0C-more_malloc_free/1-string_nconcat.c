#include "main.h"
#include  <stdlib.h>

/**
 *char *string_nconcat -concatenates two strings
 *@s1: pointer to first string
 *@s2: pointer to second string
 *@n: number of bytes of s2 to be concatenated
 *Return: pointer to new space in memory, else NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int total_str;
	unsigned int str1 = 1;
	unsigned int str2 = 1;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	while (s1[str1] != '\0')
	{
		str1++;
	}
	while (s2[str2] != '\0')
	{
		str2++;
	}

	if (n >= str2)
	{
		n = str2;
	}

	total_str = str1 + n;
	
	s3 = (char *)malloc(total_str +1);

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str1; i++)
	{
		s3[i]  = s2[j];
	}
	for (j = 0; j < n; j++)
	{
	s3[i] = s2[j];
	}
	
	s3[total_str] = '\0';
	return (s3);
}



