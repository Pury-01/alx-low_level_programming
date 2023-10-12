#include "variadic_functions.h"

/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 *
 *Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	char *strng;
	const char *fmt = format;

	va_start(args, format);
	while (format && *fmt)
	{
		if (*fmt == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (*fmt == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (*fmt == 'f')
		{
			printf("%s%f", separator, (double)va_arg(args, double));
		}
		else if (*fmt == 's')
		{
			strng = va_arg(args, char *);
			if (strng == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			{
				printf("%s%s", separator, strng);
			}
		}
		separator = ", ";
		fmt++;
	}
	printf("\n");
	va_end(args);
}
