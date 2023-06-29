#include "main.h"

/**
 * print_number -  a function that prints an integer.
 * @n: The integer to be printed.
 * void: prints an integer
 */

void print_number(int n)
{
	unsigned int num = n, half_10, mod_10;

	if (!(n >= 0))
	{
		_putchar('-');
		num = -num;
	}
	half_10 = num / 10;
	if (half_10 > 0)
		print_number(half_10);
	mod_10 = num % 10;
	_putchar(mod_10 + '0');
}

