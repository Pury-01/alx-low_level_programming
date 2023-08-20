#include "main.h"

/**
 *print_sign - prints sign of a number
 *@n: the number to be checked
 *Return: 1 when +ve 0 when zero -1 when -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
