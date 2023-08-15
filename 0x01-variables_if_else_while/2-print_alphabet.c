#include <stdio.h>

/**
 *this program prints in alphabets in lowercase
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
{
	putchar(alphabet);
	alphabet++;
}
putchar('\n');
return (0);
}
