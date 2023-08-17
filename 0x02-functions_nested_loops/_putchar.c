#include <unistd.h>

/**
*_putchar writes the character c to the stout
*@c: the character to print
*Return : 1(success)
*on error return -1 , and errno is set appropriately
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
