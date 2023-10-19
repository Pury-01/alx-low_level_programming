#include "lists.h"

/**
 *func - prints a string before main function is executed
 *
 *Return: nothing
 */

void __attribute__ ((constructor)) func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
