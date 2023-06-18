#include <stdio.h>

/**
 *main - prints all possible combinations of two two-digit numbers
 *using putchar
 *Return: return 0 (code success)
 */

int main(void)
{
	int tens = '0';
	int ones;
	int tns;
	int ons;

	while (tens <= '9') /*displays first two digit*/
	{
		ones = '0';
		while (ones <= '9')
		{
			tns = tens;
		 	for ( tns <= '9')
			{
				ons = ones + 1;
				for (ons <= '9')
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(tns);
					putchar(ons);

					if (!((tens == '9' && ones == '8') &&
					      (tns == '9' && ons == '9')))
					{
						putchar(',');
						putchar(' ');
					}
					ons++;
				}
				ons = '0';
				tns++;
			}
			ones++;
		}
		tens++;
	}
	putchar('\n');

	return (0);
}
