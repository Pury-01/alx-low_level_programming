#include "variadic_functions.h"

/**
 *print_numbers -prints numbers
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *
 *Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	printf("\n");
}
