#include <stdlib.h>

/**
 * *malloc_checked - Function that allocates memory
 * using malloc function exit if failed
 * @b: unsigned integer variable
 * Return: returns the pointer to the allocated memory or NULL
 */
void *malloc_checked(unsigned int b)
{
int *memory = malloc(b);
if (memory != 0)
return (memory);
else
exit(98);
}
