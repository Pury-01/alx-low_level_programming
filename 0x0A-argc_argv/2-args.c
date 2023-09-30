#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints all arguments it recieves
 *@argc: number of arguments recieved
 *@argv: array of strings
 *Return: 0(successful)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
