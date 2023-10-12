#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter
 *@array: array of elements
 *@size: size of the array
 *@action: pointer to the function needed for use
 *
 *Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for  (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}