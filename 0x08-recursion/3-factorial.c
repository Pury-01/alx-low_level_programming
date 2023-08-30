#include "main.h"

/**
 *factorial - returns the factorial of a given number
 *@n: number being factorized
 *Return: -1 when n is less than 0, 1 when n is 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
