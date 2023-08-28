#include "main.h"

/**
 *print_chessboard - prints the chessboard
 *@a: pointer to an array
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;
	char cb;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			cb = a[row][col];
			_putchar(cb);
			_putchar(' ');
		}
		_putchar('\n');
	}
}



