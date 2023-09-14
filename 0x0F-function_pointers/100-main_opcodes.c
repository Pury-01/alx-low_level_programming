#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the opcodes of its own main function
 *argc: counter to arguments passed
 *argv: array of arguments passed
 *Return: 0(successful)
 */

int main(int argc, char *argv[])
{
	int bytes;
	int i;

	int(*memory)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit (1);
	}
	bytes = atoi(argv[1]);
	if(bytes < 0)
	{
		printf("Error\n");
		exit (2);
	}
	for (i = 0; i < bytes;  i++)
	{
		opcode = *(unsigned char *)memory;
		printf("%.2x", opcode);

		if(i == bytes - 1)
			continue;
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
