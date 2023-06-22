#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 * followed by a new line.
 * Void: prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char character;
	int times_10;

	for (times_10 = 1; times_10 <= 10; times_10++)
	{
		for (character = 'a'; character <= 'z'; character++)
			_putchar(character);
				_putchar('\n');
	}
}
