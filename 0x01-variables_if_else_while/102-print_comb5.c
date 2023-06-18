#include <stdio.h>

/**
 *main - prints all possible combinations of two two-digit numbers
 *using putchar
 *Return: return 0 (code success)
 */

int main(void)
{
	int firstNo = '0', secondNo = '0';

	while (firstNo <= 98)
	{
		secondNo = firstNo + 1;
		while (secondNo <= 99)
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
			secondNo++;
		}
		firstNo++;
	}

	putchar('\n');

	return (0);
}
