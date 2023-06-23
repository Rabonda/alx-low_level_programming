#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: is the number of times the character _ should be printed
 *
 * Return: void - prints _ n times
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
