#include "main.h"

/**
 *_puts - prints a string to stdout
 *@str: string to be checked
 *Return: string and newline
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
				i++;
				}
				_putchar('\n');
				}
