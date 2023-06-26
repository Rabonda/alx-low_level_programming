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

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s = 0;
	j = len - 1;
	
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++, j--;
	}
}
