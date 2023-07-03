#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: input variable
 * Void: prints a chessboard
 */
void print_chessboard(char (*a)[8])
{
	unsigned int row, block = 0;

	row = 0; 
	while (row < 64)
	{
		if (row % 8 == 0 && row != 0)
		{
			block = row;
			_putchar('\n');
		}
		_putchar(a[row / 8][row - block]);
		row += 1;
	}
	_putchar('\n');
}
