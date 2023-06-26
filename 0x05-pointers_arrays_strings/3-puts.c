#include "main.h"

/**
 * _puts - a function that prints a string
 * followed by a new line
 * @str: The string vaiable.
 * void: prints a string
 */

void _puts(char *str)
{
	char strin[10] = *str;
	int x = 0;
	
	while (x < 10)
	{
		_putchar(strin[x]);
		x++;
	}

	_putchar('\n');
}
