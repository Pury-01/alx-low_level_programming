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
	int i = 0;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':

					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':

					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, (double)va_arg(args, double));
					break;
				case 's':
					strng = va_arg(args, char *);
					if (!strng)
						strng = "(nil)";
					printf("%s%s", separator, strng);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
