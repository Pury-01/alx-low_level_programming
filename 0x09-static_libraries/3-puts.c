#include "main.h"

/**
 *_puts - prints a string to stdout
 *@str: string to be checked
 *Return: string and newline
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
