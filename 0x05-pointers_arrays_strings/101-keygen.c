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
	int index = 0, add = 0, diff_half1, diff_half2;

	srand(time(0));

	while (sum < 2772)
	{
		keyGen[index] = 33 + rand() % 94;
		add += keyGen[index++];
	}

	keyGen[index] = '\0';

	if (add != 2772)
	{
		diff_half1 = (add - 2772) / 2;
		diff_half2 = (add - 2772) / 2;
		if ((add - 2772) % 2 != 0)
			diff_half1++;

		for (index = 0; keyGen[index]; index++)
		{
			if (keyGen[index] >= (33 + diff_half1))
			{
				keyGen[index] -= diff_half1;
				break;
			}
		}
		for (index = 0; keyGen[index]; index++)
		{
			if (keyGen[index] >= (33 + diff_half2))
			{
				keyGen[index] -= diff_half2;
				break;
			}
		}
	}

	printf("%s", keyGen);

	return (0);
}
