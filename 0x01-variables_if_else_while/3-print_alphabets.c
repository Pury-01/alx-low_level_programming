#include <stdio.h>

/**
 *main - Entry point
 *This program prints alphabets
 *first prints in lowercase
 *then converts them to uppercase
 *Return: Always 0(success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	/*print lowercase alphabets*/

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	/*print uppercase alphabets*/

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	/*print new line*/

	putchar('\n');

	return (0);
}
