#include <stdio.h>

/**
 *main - Entry point
 *this program prints lowercase alphabets
 *the alphabets are printed in reverse
 */
int main(void)
{
char alphabet;
for  (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	putchar (alphabet);

putchar ('\n');

return (0);
}

