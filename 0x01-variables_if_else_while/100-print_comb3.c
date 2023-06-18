#include <stdio.h>

/**
 *main - prints all possible different combinations of two digits
 *using putchar
 *Return: returns 0 (code success)
 */

int main(void)
{
	int ones;
	int tens = '0';

	while (tens <= '9') /*outer loop increments tens*/
	{
		ones = (tens + 1);
		while (ones <= '9') /*inner loop increments one's*/
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9') /*print commas and space*/
			{
				putchar(',');
				putchar(' ');
			}
			ones++;
		}
		tens++;
	}
	putchar('\n');

	return (0);
}
