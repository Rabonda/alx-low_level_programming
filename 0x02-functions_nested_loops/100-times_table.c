#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0.
 * 
 * @n: The number of times the table to be printed.
 */
void print_times_table(int n)
{
	int count, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (count = 0; count <= n; count++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = count * mult;

				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
