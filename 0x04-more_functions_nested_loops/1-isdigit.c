#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: char variable
 * Return: 1 if c its between 0 and 9 or 0 if its not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);/**its between 0 and 9*/
	else
		return (0);/**not between 0 and 9*/
}
