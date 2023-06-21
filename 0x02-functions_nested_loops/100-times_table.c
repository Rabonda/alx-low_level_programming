#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0.
 *
 * @n: The number of times the table to be printed.
 */
void print_times_table(int n)
{
	int count, multiply, results;

	if (n >= 0 && n <= 15)
	{
		for (count = 0; count <= n; count++)
		{
			_putchar('0');

			for (multiply = 1; multiply <= n; multiply++)
			{
				_putchar(',');
				_putchar(' ');

				results = count * multiply;

				if (results <= 99)
					_putchar(' ');
				if (results <= 9)
					_putchar(' ');

				if (results >= 100)
				{
					_putchar((results / 100) + '0');
					_putchar(((results / 10)) % 10 + '0');
				}
				else if (results <= 99 && results >= 10)
				{
					_putchar((results / 10) + '0');
				}
				_putchar((results % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
