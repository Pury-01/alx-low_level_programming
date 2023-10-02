#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that adds positive numbers
 *@argc: the number of arguments passed
 *
 *@argv: array of strings
 *Return: 1 if error, else 0
 */

int main(int argc, char *argv[])
{
	int num, sum, i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = 0;
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= 48 && argv[i][j] <= 57)
			{
				num = num * 10 + (argv[i][j] - '0');
				j++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}


