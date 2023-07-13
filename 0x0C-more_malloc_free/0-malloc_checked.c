#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
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
