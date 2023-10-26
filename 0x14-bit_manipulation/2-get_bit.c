#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: number being considered
 *@index:  index of the bit starting from 0
 *
 *Return: value of the bit at index
 *-1 if an error ocurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int binry;

	if (index > 63)
		return (-1);

	binry = (n >> index) & 1;
	return (binry);
}

