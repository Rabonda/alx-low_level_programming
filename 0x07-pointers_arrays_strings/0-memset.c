#include "main.h"

/**
  * _memset - a function that fills memory with a constant byte.
  * @n: bytes of the memory
  * @s: a pointer to the memory area
  * @b: The constant byte
  * Return: Returns a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		s[index] = b;
		index += 1;
	}

	return (s);
}
