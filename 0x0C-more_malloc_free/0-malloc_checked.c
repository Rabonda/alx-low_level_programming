#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Function that allocates memory using malloc function
 * @b: number of bytes to allocate
 *
 * Return: returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p != NULL)
	{
		return (p);
	}
	else
		exit(98);
}
