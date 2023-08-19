#include <stdio.h>

/**
 *main - Entry point
 *print alphabets in lowercase
 *exempt q and e
 *Return: Always 0(success)
 */

int main(void)
{
	int lowercase  = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'q' || lowercase == 'e')
		{
			lowercase  += 1;
		}
		else
		{
			putchar(lowercase);
			lowercase += 1;
		}
	}
	putchar('\n');
	return (0);
}
