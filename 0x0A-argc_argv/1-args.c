#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the number of arguments passed
 *@argc: number of arguments passed
 *
 *@argv: array of character strings
 *
 *Return: 0(successful)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
