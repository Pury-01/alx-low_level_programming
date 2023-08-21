#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: string that the length is determined
 *Return: Always 0
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
