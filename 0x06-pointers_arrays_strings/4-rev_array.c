#include "main.h"

/**
 *reverse_array - reverses the contents of an array of integers
 *@a: pointer to the array
 *@n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i, b;

	for (i = 0, b = n - 1; i < b; i++, b--)
	{
		temp = a[i];
		a[i] = a[b];
		a[b] = temp;
	}
}


