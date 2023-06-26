#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
/**int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
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
