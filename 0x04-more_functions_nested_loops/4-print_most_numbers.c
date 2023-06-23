#include "main.h"

/**
 * print_most_numbers - function that prints the numbers from 0 to 9
 * except 2 and 4
 * followed by a new line.
 * Return: void - prints numbers
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (!(i == 2) || !(i == 4))
			_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
