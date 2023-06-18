#include <stdio.h>

/**
 *main - Print all the letters except q and e
 *Return: Returns 0 (code success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
		}
		letter += 1;
	}
	putchar('\n');

	return (0);
}
