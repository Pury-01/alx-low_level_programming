#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: the number to be computed
 *Return: value of the last digit
 */

int print_last_digit(int n)
{
	int lstdgt;

	lstdgt = n % 10;
	if (lstdgt < 0)
	{
		lstdgt = lstdgt * -1;
	}
	_putchar(lstdgt + '0');
	return (lstdgt);
}
