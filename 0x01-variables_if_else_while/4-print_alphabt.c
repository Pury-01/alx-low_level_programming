#include <stdio.h>

/**
 *main - Entry point
 *print alphabets in lowercase
 *exempt q and e
 *Return : Always 0(success)
 */

int main(void)
{
	char letter < = 'a';

while (letter <= 'z')
{
	putchar(letter);
	letter++;
}

if (letter != 'q' && letter != 'e')
{
	putchar(letter);
       letter++;
}

       putchar('\n');
       
return (0);
}
