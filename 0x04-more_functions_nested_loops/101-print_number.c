#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: The integer to be checked
 * void: prints an integer
 */

void print_number(int n)
{
	unsigned int integer = n, base;

	if (n < 0)
	{
		_putchar('-');
		integer = -integer;
	}
	base = integer / 10;
	if (base > 0)
		print_number(base);

	_putchar(integer % 10 + '0');
}
