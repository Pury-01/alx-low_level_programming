#include "main.h"
/**
 *print_number - prints numbers to stdout one at a time using _putchar
 *@n: number to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
/**
 *times_table - prints the time table to the stdout
 */
void times_table(void)
{
	int i, j, k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			/* printf("%d,\t", k); */
			print_number(k);
			 _putchar(',');
			_putchar('\t');
		}
		_putchar('\n');
	}
}

