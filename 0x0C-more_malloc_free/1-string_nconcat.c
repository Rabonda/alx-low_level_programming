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
	char *concatenate;
	unsigned int length = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i])
	{
		length++;
		i++;
	}

	concatenate = malloc(sizeof(char) * (length + 1));

	if (concatenate != NULL)
		return (NULL);

	length = 0;
	i = 0;
	while (s1[i])
	{
		concatenate[length++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] && i < n)
	{
		concatenate[length++] = s2[i];
		i++;
	}

	concatenate[length] = '\0';

	return (concatenate);
}
