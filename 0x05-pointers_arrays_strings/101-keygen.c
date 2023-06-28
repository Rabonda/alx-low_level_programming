#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords
 * for the program 101-crackme.
 * Return: generates random valid passwords
 */
int main(void)
{
	char keyGen[84];
	int index = 0, add = 0, halfDifference1;
	int halfDifference2, diff;

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
		diff = add -2772;
		halfDifference1 = diff / 2;
		halfDifference2 = diff / 2;
		if (diff % 2 != 0)
			halfDifference1++;

		for (index = 0; keyGen[index]; index++)
		{
			if (keyGen[index] >= (33 + halfDifference1))
			{
				keyGen[index] -= halfDifference1;
				break;
			}
		}
		for (index = 0; keyGen[index]; index++)
		{
			if (keyGen[index] >= (33 + halfDifference2))
			{
				keyGen[index] -= halfDifference2;
				break;
			}
		}
	}

	printf("%s", keyGen);

	return (0);
}
