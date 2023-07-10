#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: returns 0 code success.
 */
int main(int argc, char *argv[])
{
	int count_cents, number_of_coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	count_cents = atoi(argv[1]);

	while (count_cents > 0)
	{
		switch (count_cents)
			{
				case count_cents >= 25:
					count_cents -= 25;
				break;
				case count_cents >= 10:
					count_cents -= 10;
				break;
				case count_cents >= 5:
					count_cents -= 5;
				break;
				case count_cents >= 2:
					count_cents -= 2;
				break;
				case count_cents >= 1:
					count_cents -= 1;
			}
		number_of_coins += 1;
	}
	printf("%d\n", number_of_coins);
	return (0);
}
