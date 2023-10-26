#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b:  pointer to a string of 0 and 1 chars
 *
 *Return: converted number, 0 if there is one or more chars
 *in the string b that is not 0 or 1, or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int number = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		number = 2 * number + (b[j] - '0');
	}
	return (number);
}
