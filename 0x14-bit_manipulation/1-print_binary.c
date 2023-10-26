#include "main.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number whose binary representation is printed
 *
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
	int j, counter = 0;
	unsigned long int binry;

	for (j = 63; j >= 0; j--)
	{
		binry = n >> j;

		if (binry & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
