#include <stdio.h>

/**
 *main -  prints all single digit numbers of base 10 starting from 0
 *Return: returns 0 (code success)
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%i", number);
		number += 1;
	}
	putchar('\n');

	return (0);
}
