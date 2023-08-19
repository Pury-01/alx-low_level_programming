#include <stdio.h>

/**
 * Main- print all posible combinations of single-digit numbers
 * Return: Always 0(sucess)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');

	return (0);
}
