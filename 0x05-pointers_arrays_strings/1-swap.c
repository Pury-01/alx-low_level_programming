#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: takes the value of b
 *@b: takes the value of a
 *Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
