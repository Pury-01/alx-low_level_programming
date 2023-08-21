#include "main.h"

/**
 *print_rev - unction that prints a string, in reverse
 *@s: pointer to the string
 *Return: 0
 */

void print_rev(char *s)
{
	int strg = 0;

	while (s[strg])
		strg++;
	while (strg--)
		_putchar(s[strg]);
	_putchar('\n');
}
