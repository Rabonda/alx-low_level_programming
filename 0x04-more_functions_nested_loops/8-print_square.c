#include "main.h"

/**
 * print_square - prints a square follwed by a new line
 * @size: dimension
 *
 */
void print_square(int size)
{
int row, col;

if (size > 0)
{
for (col = 0; col < size; col++)
{
for (row = 0; row < size; row++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
