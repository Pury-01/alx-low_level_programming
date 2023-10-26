#include "main.h"

/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: pointer to the binary set to unsigned int
 *@index: index starting from 0
 *
 *Return: 1 if it worked
 *-1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1ul << index) & *n);
	return (1);
}
