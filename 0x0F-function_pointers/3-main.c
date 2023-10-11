#include "3-calc.h"

/**
 *main - program that performs simple operations
 *@argc: number of arguments passed
 *@argv: array of strings
 *
 *Return: 0 if successful, -1 if it fails
 */

int main(int argc, char *argv[])
{
	int num1;
	char *operator;
	int num2;
	int outcome;

	if (argc != 4)
	{

		printf("Usage: %s num1 operator num2\n", argv[0]);
		return (98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL)
	{
		prntf("Error\n");
		return (-1);
	}
	outcome = get_op_func(operator)(num1, num2);
	printf("%d\n", outcome);
	return (0);
}
