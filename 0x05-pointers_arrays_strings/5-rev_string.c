#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: string variable to be reversed
 */
void rev_string(char *s)
{
	int i = 0, j, len = 0;
	char tmp;

	while (s[i++])
		len++;

	i = len - 1;

	while (i >= (len / 2))
	{
		j = len - i - 1;
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
	}
}
