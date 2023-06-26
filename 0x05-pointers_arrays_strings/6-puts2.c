#include "main.h"

/**
 * puts2 -  a function that prints every other character of a string
 * starting with the first character
 * followed by a new line.
 * @str: The string variable.
 * void: prints every other character of a string
 */
void puts2(char *str)
{
	int index = 0, strlen = 0;

	while (str[index++])
		strlen++;
	index = 0;
	while (index < strlen)
	{
		_putchar(str[index]);
		index = index + 2;
	}

	_putchar('\n');
}
