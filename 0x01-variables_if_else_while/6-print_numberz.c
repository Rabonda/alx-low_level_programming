#include <stdio.h>

/**
 *main - numbers of base 10 starting from 0 using putchar
 *Return: returns 0 (code success)
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		number += 1;
	}
	putchar('\n');

	return (0);
}
