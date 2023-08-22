#include "main.h"

/**
 *_isdigit - checks for a digit
 *@c: interger to be checked
 *Return: 1 if c is an integer else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

