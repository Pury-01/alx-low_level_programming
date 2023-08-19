#include <stdio.h>

/**
 * Main - Entry point
 * This program prints all single digitsof base 10
 * Return: Always 0(success)
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 10; numb++)
		putchar ((numb % 10) + '0');

	putchar ('\n');
	return (0);
}

