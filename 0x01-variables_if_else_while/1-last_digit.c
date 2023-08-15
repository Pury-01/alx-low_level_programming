#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*Main - Entry point 
*Return: Always 0(success)
*This program will generate a random number 
*It will then display the last digit
*/

int main(void)
{
int n;
int last_digit= 0;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (last_digit > 5)
{
        printf("last digit of %i is %i and is greater than 5\n", n, last_digit);
}
else if (last_digit== 0)
{
	printf("last digit of %i is %i and is 0 \n", n, last_digit);
}
else
{
	printf("last_digit of %i is %i and is less than 6 and not 0\n", n, last_digit);
}	
return (0);
}

