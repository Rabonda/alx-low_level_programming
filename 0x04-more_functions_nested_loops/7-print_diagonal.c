#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of lines should be printed
 */
void print_diagonal(int n)
{
	int row, col;

	if (n > 0)
	{
		for (col = 0; col < n; col++)
		{
			for (row = 0; row < col; row++)
			{
				if (row != col)
					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
