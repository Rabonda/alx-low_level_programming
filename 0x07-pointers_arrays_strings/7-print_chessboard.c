#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int row, board = 0;

	for (row = 0; row < 64; row++)
	{
		if (row % 8 == 0 && row != 0)
		{
			board = row;
			_putchar('\n');
		}
		_putchar(a[row / 8][row - board]);
	}
	_putchar('\n');
}
