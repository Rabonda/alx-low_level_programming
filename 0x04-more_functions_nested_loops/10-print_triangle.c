#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: Determines the size of the triangle
 */
void print_triangle(int size)
{
	int row, col;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= size; col++)
		{
			for (row = 1; row <= size; row++)
			{
				if ((row <= size - col))
				{
					_putchar(32);
				}
				else
				{
					_putchar('#');
				}

			}
			_putchar('\n');
		}
	}
}
