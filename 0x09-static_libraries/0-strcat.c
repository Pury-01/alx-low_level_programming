#include "main.h"

/**
 *_strcat - concatenates two strings
 *@src: string appended
 *@dest: string being appended to
 *Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int length;
	int i;

	length = 0;
	while (dest[length] != '\0')
	{length++;
	}
	for (i = 0; src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
