#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the numebr to be checked
 *
 * Return: returns 1 if the n is positive, 0 if n is 0, and -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
