#include <stdio.h>

/**
 *main - prints the lowercase alphabet in reverse
 *using putchar
 *Return: returns 0 (code success)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
