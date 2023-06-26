#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: string variable to be reversed
 * void: reverses a string
 */
void rev_string(char *s)
{
	int firstIndex = 0, secondIndex, len = 0;
	char temp;

	while (s[firstIndex++])
		len++;

	firstIndex = len - 1;

	while (firstIndex >= (len / 2))
	{
		secondIndex = len - firstIndex - 1;
		temp = s[firstIndex];
		s[firstIndex] = s[secondIndex];
		s[secondIndex] = temp;
		firstIndex--;
	}
}
