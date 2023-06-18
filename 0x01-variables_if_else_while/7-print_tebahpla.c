#include <stdio.h>

/**
 *main - prints the lowercase alphabet in reverse
 *using putchar
 *Return: returns 0 (code success)
 */

int main(void)
{
	char leter = 'z';

	while (leter >= 'a')
	{
		putchar(leter);
		leter -= 1;
	}
	putchar('\n');

	return (0);
}
