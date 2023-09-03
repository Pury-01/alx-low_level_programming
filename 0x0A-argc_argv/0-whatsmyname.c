#include <stdio.h>
#include "main.h"


/**
 *print_name - prints it's name
 *@argc: argument count 
 *@argv: array of the strings
 *Return: 0 on success
 */

int main(int argc, char* argv[])
{
	(void)argc;  /*unused parameter*/

	printf("%s\n", argv[0]);
	return (0);
}
