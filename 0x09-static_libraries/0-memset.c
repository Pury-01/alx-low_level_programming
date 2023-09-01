#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@*s: pointer to a variable
 *@b: constant byte to be filled
 *@n: number of times constant byte is filled
 *@s: memory area being filled
 *Return: pointer to the memory area s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
