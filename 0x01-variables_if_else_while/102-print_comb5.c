#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *using putchar
 * Return: return 0(code success)
 */
int main(void)
{
	int firstNo = 0;
	int secondNo;

	while (firstNo <= 98)
	{
		for (secondNo = firstNo + 1; secondNo <= 99; secondNo++)
		{
			putchar((firstNo / 10) + '0');
			putchar((firstNo % 10) + '0');
			putchar(' ');
			putchar((secondNo / 10) + '0');
			putchar((secondNo % 10) + '0');

			if (firstNo == 98 && secondNo == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
		firstNo++;
	}

	putchar('\n');

	return (0);
}
