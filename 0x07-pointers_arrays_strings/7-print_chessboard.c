#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: input variable
 * Void: prints a chessboard
 */
void print_chessboard(char (*a)[8])
{
	unsigned int row, block = 0;

	for (row = 0; row < 64; row++)
	{
		if (row % 8 == 0 && row != 0)
		{
			block = row;
			_putchar('\n');
		}
		_putchar(a[row / 8][row - block]);
	}
	_putchar('\n');
}
