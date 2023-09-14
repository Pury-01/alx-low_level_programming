#include <stdio.h>
#include <stdlib.h>
#include "cal.h"
#include <string.h>
#include <stddef.h>

/**
 *main - function that performs simple operations
 *@agrc: counts of the number of arguments
 *@argv: pointer to an array of elements
 *Return: 0 if success, -1 if error 
 */

int main(int (void) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (argv[2] != op[])
	{
		printf("Error\n");
		exit (99);
	}
	if ((*op == '/' && num2 == 0) || (*op =='%' && num2 == 0))
	
	{
		printf("Error\n");
		exit (100);
	}

	printf("%d\n", argv[2](num1, num2));
	return (0);
}


