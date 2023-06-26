#include "main.h"

/**
 * puts_half -a function that prints half of a string
 * followed by a new line.
 * @str: The string variable to be printed in half.
 * void: prints half of a string
 */
void puts_half(char *str)
{
	int index = 0, half_number, strLen = 0;

	while (str[index++])
		strLen++;

	if (strLen % 2 != 0)
		half_number = (strLen + 1) / 2;
	else
		half_number = strLen / 2;

	index = half_number;
	while (index < strLen)
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
