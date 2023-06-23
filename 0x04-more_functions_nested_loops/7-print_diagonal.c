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
		for (col = 1; col <= n; col++)
		{
			for (row = 1; row <= col; row++)
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
