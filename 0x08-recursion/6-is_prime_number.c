#include "main.h"

/**
 *is_prime_number - checks if interger is a prime number
 *@n: the number to be checked
 *is_prime_helper - called help find prime numbers
 *@i: divisor used to determine a prime number
 *Return: 1 if integer is prime number, else 0
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
