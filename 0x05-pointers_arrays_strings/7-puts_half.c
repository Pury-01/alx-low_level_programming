#include "main.h"

/**
 *puts_half - prints half of a string
 *@str: pointed string
 *
 */

void puts_half(char *str)
{
	int f_string, hf_string;

	f_string = 0;
	while (str[f_string] != '\0')
		f_string++;

	hf_string = f_string / 2;
	if (f_string % 2 == 1)
		hf_string++;

	while (hf_string < f_string)
	{
		_putchar(str[hf_string]);
		hf_string++;
	}
	_putchar('\n');
}
