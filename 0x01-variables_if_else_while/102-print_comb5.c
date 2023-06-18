#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int firstNo =  0, secondNo;

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
