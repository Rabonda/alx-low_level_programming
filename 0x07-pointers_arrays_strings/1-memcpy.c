#include "main.h"

/**
  * _memcpy - a function that copies memory area.
  * @n:  bytes from memory area
  * @src: the memory area
  * @dest: the memory area copied to src
  *Return: returns a pointer to @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
