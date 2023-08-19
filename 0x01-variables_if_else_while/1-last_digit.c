#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *Main -This program will generate a random number
 *It will then display the last digit
 *Return: Always 0(success)
 */

int main(void)
{/*random number is generated every time*/

	int n;
	int last_digit; /*the last digit of a number*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}

