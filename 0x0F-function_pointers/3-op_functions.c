#include <stdlib.h>
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - returns the sum of two numbers
 *@a: number one
 *@b: number two
 *Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - returns the difference
 *@a: number one 
 *@b: number two
 *Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_div - returns the result of the division
 *@a: number one
 *@b: number two
 *Return: result of the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mul -returns the product of multiplication
 *@a: number one 
 *@b: number two
 *Return: result of the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_mod - returns the remainder of the division of numbers
 *@: number one
 *@b: number two
 *Return: the remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

