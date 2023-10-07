#include "main.h"

/**
 *print_numbers - prints numbers 0 - 9
 *
 */

void print_numbers(void)
{
	char numbers = '0';

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		_putchar(numbers);
	}
	_putchar('\n');
}
