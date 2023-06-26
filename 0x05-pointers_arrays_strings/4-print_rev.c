#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse
 * followed by a new line.
 * @s: string variable.
 */

void print_rev(char *s)
{
	int iCount = 0;

	while (s[iCount])
		iCount++;

	while (iCount--)
		_putchar(s[iCount]);

	_putchar('\n');

}
