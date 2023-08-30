#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: the number being computed
 *Return: n if n is 0 or 1, else square root of n
 *else return -1 if n is less than 0
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
		return (n / _sqrt_recursion(n / 2));
}
