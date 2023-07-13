#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - Function that concatenates variable bytes 
 * of a string to another string
 * @s1: string variable to append
 * @s2: string variable to concatenate
 * @n: number of bytes
 *
 * Return: returns pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *words;
	unsigned int row, col = 0, first_length, second_length;

	for (first_length = 0; s1 && s1[first_length]; first_length++)
		continue;
		
	for (second_length = 0; s2 && s2[second_length]; second_length++)
		continue;

	if (n > second_length)
		words = malloc(sizeof(char) * (first_length + second_length + 1));
	else
		words = malloc(sizeof(char) * (first_length + n + 1));

	if (words == '\0')
		return (NULL);

	row = 0;
	while (row < first_length)
	{
		words[row] = s1[row];
		row++;
	}

	while (n < second_length && row < (first_length + n))
		words[row++] = s2[col++];

	while (n >= second_length && row < (first_length + second_length))
		words[row++] = s2[col++];

	words[row] = '\0';

	return (words);
}
