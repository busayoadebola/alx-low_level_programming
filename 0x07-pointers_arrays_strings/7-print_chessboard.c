#include "main.h"

/**
 * print_chessboard - to print an array
 * @a: the array to be created
 */

void print_chessboard(char (*a)[8])
{
	int row, col = 0;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
