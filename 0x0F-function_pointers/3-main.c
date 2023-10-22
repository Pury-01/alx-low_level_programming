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
	char *op;
	int num2;
	(void)argc;

	if (argc != 4)
	{

		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
