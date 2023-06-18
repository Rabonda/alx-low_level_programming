#include <stdio.h>

/**
 *main -  prints the alphabet in lowercase
 *Return: returns 0, if code it's successful
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
