#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: The first string variable.
 * @s2: The second string variable.
 * @n: The maximum number of bytes.
 * Return: returns the concatenated of two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string_concat;
	unsigned int string_len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		string_len++;

	string_concat = malloc(sizeof(char) * (string_len + 1));

	if (string_concat == NULL)
		return (NULL);

	string_len = 0;

	for (i = 0; s1[i]; i++)
		string_concat[string_len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		string_concat[string_len++] = s2[i];

	string_concat[string_len] = '\0';

	return (string_concat);
}
