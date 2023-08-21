#include "main.h"

/**
 *rev_string - function that reverses a string
 *@s: the string pointer
 *Return: 0
 */

void rev_string(char *s)
{
	int length, z, half;
	char p;

	for (length = 0; s[length] != '\0'; length++)
		;
	z = 0;
	half = length / 2;

	while (half--)
	{
		p = s[length  - z - 1];
		s[length - z - 1] = s[z];
		s[z] = p;
		z++;
	}
}
