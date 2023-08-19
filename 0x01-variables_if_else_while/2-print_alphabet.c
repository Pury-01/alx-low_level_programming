#include <stdio.h>

/**
 *main - entry point
 *this program prints in alphabets in lowercase
 *Return: Always 0(success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
