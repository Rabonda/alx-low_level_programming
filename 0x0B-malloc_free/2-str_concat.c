#include "main.h"
#include <stdlib.h>

/**
  * str_concat - function that concatenates two strings.
  * @s1: The string to be concatenated.
  * @s2: The string to be concatenated.
  * Return: concatenates two strings.
  */

char *str_concat(char *s1, char *s2)
{
	char *concatenate_string;
	int count, count_concat = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	count = 0;
	while (s1[count] || s2[count])
	{
		len++;
		count++;
	}

	concatenate_string = malloc(sizeof(char) * len);

	if (concatenate_string == NULL)
		return (NULL);

	count = 0;
	while (s1[count])
	{
		concatenate_string[count_concat++] = s1[count];
		count++;
	}

	count = 0;
	while (s2[count])
	{
		concatenate_string[count_concat++] = s2[count];
		count++;
	}

	return (concatenate_string);
}
