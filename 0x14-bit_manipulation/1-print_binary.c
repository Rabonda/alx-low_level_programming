#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: long integer.
 * void: prints decimal as binary
 */
void print_binary(unsigned long int n)
{
	if (n == 1)
	{
		putchar('1');
		return;
	}
	else if (n == 0)
	{
		putchar ('0');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}

