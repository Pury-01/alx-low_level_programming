#include <stdio.h>

/**
 *main - prints the number of arguments passsed
 *@argc: number of arguments passed
 *@argv: array of strings
 *Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc);

	return (0);
}

