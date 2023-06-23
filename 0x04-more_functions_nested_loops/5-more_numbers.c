#include "main.h"

/**
 * more_numbers - print number 0 - 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int col, row;

	for (row = 1; row <= 10; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			if (col >= 10)
				_putchar('0' + 1);
			_putchar('0' + (col % 10));
		}
		_putchar('\n');
	}
}
