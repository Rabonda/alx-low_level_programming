#include "main.h"
#include <stdlib.h>
/**
  * _strdup - function that returns a pointer to a newly alloctaed
  * space in memory which contains a copy of the string passed.
  * @str: pointer to string being duplicated.
  *
  * Return: a newly alloctaed
  * space in memory which contains a copy of the string passed.
  */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int str_len, x;

	if (str == NULL)
	{
		return (NULL);
	}

	for (str_len = 0; str[str_len] != '\0'; str_len++)
		continue;

	new_str = malloc(sizeof(char) * (str_len + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (x < str_len)
	{
		new_str[x] = str[x];
		x++;
	}
	new_str[str_len] = '\0';
	return (new_str);

}
