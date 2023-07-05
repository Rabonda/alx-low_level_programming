#include "main.h"

/**
 * square_root - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int square_root(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r == n / 2)
	{
		return (-1);
	}
	else
		return (find_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (find_sqrt(n, r));
}
