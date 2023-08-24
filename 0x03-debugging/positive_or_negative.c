#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point of the program
 *This program generates a random number
 *The number is classified as positive, negative,or zero
 *Return: Always 0(success)
 */

int main(void)
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
	return (0);
}
