#include "main.h"

/**
 *_pow_recursion - returns the value of x
 *raised to the power of y
 *
 *@x: value of a number
 *@y: power raised to a number
 *Return: -1 if y is lower than 0, else x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
