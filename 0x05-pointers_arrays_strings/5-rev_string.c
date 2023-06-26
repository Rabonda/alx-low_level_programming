#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char tmp;
	int len = 0;

	while (s[i++])
	{
		len++;
	}

	i = len - 1;

	while (i >= len / 2)
	{
		j = len - i - 1;
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
	}
}
