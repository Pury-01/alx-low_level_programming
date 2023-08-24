#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: string appended to
 *@src: string to be appended
 *@n: bytes contained in src
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int src_index = 0;

	while (dest[dest_length] != '\0')
	{dest_length++;
	}

	while (src[src_index] != '\0' && n > 0)
	{
		dest[dest_length] = src[src_index];
		dest_length++;
		src_index++;
		n--;
	}

	dest[dest_length] = '\0';
	return (dest);
}

