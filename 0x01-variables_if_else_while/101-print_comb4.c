#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *using putchar
 *Return: returns 0 (code success)
 */

int main(void)
{
	int one;
	int ten;
	int hundred = '0';

	while (hundred <= '9') /*increments hundreds*/
	{
		ten = hundred + 1;
		while (ten <= '9') /*increments tens*/
		{
			one = (ten + 1);
			while (one <= '9') /*increments ones*/
			{
				putchar(hundred);
				putchar(ten);
				putchar(one);
				if (hundred != '7' || ten != '8' || one != '9')
				{
					putchar(',');
					putchar(' ');
				}
				one++;
			}
			ten++;
		}
		hundred++;
	}
	putchar('\n');

	return (0);
}
