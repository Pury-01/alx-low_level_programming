#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copies the string pointed to by src
 *@dest: points to buffer
 *@src: points to the string
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = -1;

	do {
		n++;
		dest[n] = src[n];
	} while (src[n] != '\0');
	return (dest);
}
