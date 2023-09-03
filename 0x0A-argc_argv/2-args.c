#include <stdio.h>

/**
 *main - prints all arguments it recieves
 *@argc: arguments count
 *@argv: array of strings
 *Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for(i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	} i++;

	return (0);
}
