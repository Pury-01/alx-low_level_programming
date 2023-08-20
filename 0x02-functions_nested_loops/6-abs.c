#include "main.h"

/**
 *_abs - computes absolute value of an integer
 *@c: the number  being computed
 *Return: absolute value of number, else 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int a_val;

		a_val = c * -1;
		return (a_val);
	}
	return (c);
}
