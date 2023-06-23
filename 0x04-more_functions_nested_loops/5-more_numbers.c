#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers from 0 to 14
 * followed by a new line.
 * Return: void - display numbers from 0 to 14, 10 times
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
