#include "function_pointers.h"

/**
 *print_name - functions that prints a name
 *@name: name printed
 *
 *@f: function pointing to a function taking char*
 *parameter
 *
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
