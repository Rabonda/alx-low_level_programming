#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci nummbers.
 *
 * Return: returns 0 (code success).
 */
int main(void)
{
	int count;
	unsigned long fibonacci_1 = 0, fibonacci_2 = 1, total;

	for (count = 0; count <= 49; count++)
	{
		total = fibonacci_1 + fibonacci_2;
		printf("%lu", total);

		fibonacci_1 = fibonacci_2;
		fibonacci_2 = total;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
