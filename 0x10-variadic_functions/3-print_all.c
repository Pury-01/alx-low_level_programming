#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *ptr, *tr = "";

	va_list listing;

	va_start(listing, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", tr, va_arg(listing, int));
					break;
				case 'i':
					printf("%s%d", tr, va_arg(listing, int));
					break;
				case 'f':
					printf("%s%f", tr, va_arg(listing, double));
					break;
				case 's':
					ptr = va_arg(listing, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s\n", tr, ptr);
					break;
				default:
					i++;
					continue;
			}
			tr = ", ";
			i++;
		}
	}
}
