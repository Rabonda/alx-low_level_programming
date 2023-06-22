#include "main.h"

/**
 * times_table - prints the 9 times table.
 * starting with 0
 * return: void
 */
void times_table(void)
{
	int times_9, row, multiple;

	for (times_9 = 0; times_9 <= 9; times_9++)
	{
		for (row = 0; row <= 9; row++)
		{
			multiple = times_9 * row;
			if (row != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (multiple <= 9)
					_putchar(' ');
			}
			if (multiple <= 9)
				_putchar('0' + multiple);
			else
			{
				_putchar('0' + (multiple / 10));
				_putchar('0' + (multiple % 10));
			}
		}
		_putchar('\n');
	}
}
