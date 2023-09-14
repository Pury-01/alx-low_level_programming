#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_strings - prints strings
 *@separator: the string to be printed between the strings
 *@n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *ptr;

	va_list listing;

	va_start(listing, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(listing, char *);

		if (!ptr)
		ptr = "nil";
			if (!separator)
			{
				printf("%s", ptr);
			}
			else if (separator && i == 0)
			{
				printf("%s", ptr);
			}
			else
				printf("%s%s", separator, ptr);
	}
	printf("\n");
	va_end(listing);
}
