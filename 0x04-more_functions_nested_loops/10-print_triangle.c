#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * followed by a new line.
 * @size: is the size of the triangle
 * void: prints a triangle
 */
void print_triangle(int size)
{
	int row, col;

	if (size >= 1)
	{
		for (col = 1; col <= size; col++)
		{
			for (row = 1; row <= size; row++)
			{
				if (row <= size - col)
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
	else
	{
		_putchar('\n');
	}
}
