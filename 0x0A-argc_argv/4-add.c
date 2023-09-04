#include <stdio.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: an array of string
 *Return: 1 when error encoutered, else 0
 */

int main(int argc, char *argv[])
{
	int result = 0;

	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int num = strtol(argv[i], NULL, 10);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
