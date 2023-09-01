#include "main.h"

/**
 *_strncpy - copies one string to another
 *@dest: string being copied to
 *@src: string beingcopied
 *@n: number of characters/bytes copied
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

