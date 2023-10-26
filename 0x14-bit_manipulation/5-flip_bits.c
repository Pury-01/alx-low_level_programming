#include "main.h"

/**
 *flip_bits - returns the number of bits you would need to flip
 *to get from one number to another
 *@n: number 1
 *@m: number 2
 *
 *Return: number of bits you would need to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, flip_bits = 0;
	unsigned long int prev;
	unsigned long int flip = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		prev = flip >> i;
		if (prev & 1)
			flip_bits++;
	}
	return (flip_bits);
}
