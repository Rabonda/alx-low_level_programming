#include "main.h"

/**
  * _strchr - a function that locates a character in a string
  * @c: the first occurrence of the character
  * @s: The string
  * Return: returns a pointer to the first occurence of c
  */
char *_strchr(char *s, char c)
{
	if (*s == c)
		return (s);
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
