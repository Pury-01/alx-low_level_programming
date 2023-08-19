#include <stdio.h>

/**
 *main -Entry
 *Return: Always 0(success)
 *this program print single-digit numbers
 */

int main(void)
{
	int number;

	while (number < 10)
	{
		printf("%d", number);
		number += 1;
	}
	printf("\n");
	return (0);
}
