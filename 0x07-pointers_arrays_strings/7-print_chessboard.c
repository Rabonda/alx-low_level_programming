#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int row, board = 0;

	row = 0;
	while (row < 64)
	{
		if (row % 8 == 0 && row != 0)
		{
			board = row;
			_putchar('\n');
		}
		_putchar(a[row / 8][row - board]);

		row += 1;
	}
	_putchar('\n');
}
