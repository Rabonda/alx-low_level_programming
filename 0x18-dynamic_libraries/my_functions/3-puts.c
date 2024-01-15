#include "main.h"

/**
 * _puts - a function that prints a string
 * followed by a new line
 * @str: The string vaiable.
 * void: prints a string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
