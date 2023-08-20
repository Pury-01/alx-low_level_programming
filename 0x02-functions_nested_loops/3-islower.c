#include "main.h"

/**
 *_islower - program checks for lowercase characters
 *@c: character to be checked
 *Return: 1 if c is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
