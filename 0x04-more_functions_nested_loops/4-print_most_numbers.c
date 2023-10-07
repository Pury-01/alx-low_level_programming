#include "main.h"

/**
 *print_most_numbers - print 0 to 9
 *skips 2 and 4
 *
 */

void print_most_numbers(void)
{
	char numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		if (numbers == '2' || numbers == '4')
		{
			continue;
		}
		_putchar(numbers);
	}
	_putchar('\n');
}
