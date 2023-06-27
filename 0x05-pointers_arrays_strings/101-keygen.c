#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	char keyGen[84];
	int index = 0, add = 0, twice = 0, halfDifference1, halfDifference2;

	srand(time(0));

	while (add < 2772)
	{
		keyGen[index] = 33 + rand() % 94;
		add = add + keyGen[index];
		index++;
	}

	keyGen[index] = '\0';

	if (add != 2772)
	{
		halfDifference1 = (add - 2772) / 2;
		halfDifference2 = (add - 2772) / 2;
		if ((add - 2772) % 2 != 0)
			halfDifference1++;

		while (twice <2)
		{
			for (index = 0; keyGen[index]; index++)
			{
				if (keyGen[index] >= (33 + halfDifference1))
				{
					keyGen[index] -= halfDifference1;
					break;
				}
			}
			twice++;
		}
	}

	printf("%s", keyGen);

	return (0);
}
