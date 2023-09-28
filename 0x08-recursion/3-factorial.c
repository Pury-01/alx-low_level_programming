#include "main.h"

/**
 *factorial - returns the factorial of a given number
 *@n: number of the factorial
 *
 *Return: -1 if n is less than 0, else factorial
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
