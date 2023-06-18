#include <stdio.h>

/**
 *main -  prints all possible combinations of single-digit numbers
 *using putchar
 *Return: returns 0 (code success)
 */

int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');

	return (0);
}
