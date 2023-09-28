#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: the number whose square root is returned
 *
 *Return: -1 if n has no natural square root
 *else returns the square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_perfect_sqrt_recursion(n, 0));
}
/**
 *_perfect_sqrt_recursion - finds  natural square root
 *@n: number whose square root is being found
 *@num: number being checked
 *Return: perfect square root
 */
int _perfect_sqrt_recursion(int n, int num)
{
	if (num * num > n)
	{
		return (-1);
	}
	if (num * num == n)
	{
		return (num);
	}
	return (_perfect_sqrt_recursion(n, num + 1));
}
