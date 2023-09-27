#include "main.h"

/**
 *is_palindrome - finds if a string is a palindrome
 *@s: pointr to the string
 *Return: 1 if a palindrome else 0
 */

int is_palindrome(char *s)
{
	if (*s !='\0')
	{
		is_palindrome(s + 1);
		return (0);
	}
	else
		return (1);
}
