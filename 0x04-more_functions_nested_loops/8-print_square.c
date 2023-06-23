#include "main.h"

/**
 * print_square - function that prints a square
 * @size: the size of the square
 * void: prints the square of #
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
