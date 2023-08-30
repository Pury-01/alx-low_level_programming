#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power of y
 *@x: number being calculated
 *@y: number being raised to x
 *Return: 1 when y is 0, -1 if y negative,value of x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
