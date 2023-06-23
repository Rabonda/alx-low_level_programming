#include "main.h"

/**
 * print_diagonal - Drawsa diagonal line on terminal
 * @n: number of lines
 */
void print_diagonal(int n)
{
	int row, col;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (col = 0; col < row; col++)
			{
				if (col != row)
					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
