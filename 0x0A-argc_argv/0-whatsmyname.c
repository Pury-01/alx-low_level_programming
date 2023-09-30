#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that prints it's name
 *@argc: number of arguments
 *@argv: array of arguments passed
 *Return: 0(successful)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
