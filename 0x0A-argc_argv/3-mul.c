#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that multiplies two numbers
 *@argc: argument count
 *@argv: array of strings
 *Return: 0(success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = strtol(argv[1], NULL, 10);
	num2 = strtol(argv[2], NULL, 10);

	res = num1 * num2;

	printf("%d\n", res);

	return (0);
}
