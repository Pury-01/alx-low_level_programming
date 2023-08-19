#include <stdio.h>

/**
 *main- Entry
 *this program prints all numbers of base 16
 *they are printed in lowercase
 *Return: 0(success)
 */
int main(void)
{
	int n; /*represent a digit of base 16*/	
	char lower; /*represents the digits in lowercase in ASCII*/

	for (n = 0; n < 10; n++)
		putchar ((n % 10) + '0');
	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);

	putchar('\n');

	return (0);
}
