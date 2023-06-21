#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 *
 *
 * Return: sum of all the multiples of 3 or 5
 */
int main(void)
{
	int num;
	int add = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 5) == 0 || (num % 3) == 0)
			add += num;
	}

	printf("%d\n", num);

	return (0);
}
