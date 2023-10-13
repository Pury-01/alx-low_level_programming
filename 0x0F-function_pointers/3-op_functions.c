#include "3-calc.h"

/**
 *op_add - adds two numbers
 *@a: first number
 *@b: second number
 *Return: the sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - gives the difference of two numbers
 *@a: first number
 *@b: second number
 *Return: the difference between the two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two numbers
 *@a: first number
 *@b: second number
 *Return: product of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two numbers
 *@a: first number
 *@b: second number
 *Return: the result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - Returns remainder of divison of two numbers
 *@a: first number
 *@b: second number
 *Return: remainder of divison of two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
