#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @number: integer to be checked
 *
 * Return: last digit of the number
 */
int print_last_digit(int number)
{
	int lastDigit;
	lastDigit = number % 10;
	
	if (lastDigit < 0)
		lastDigit = -number;

	_putchar('0' + lastDigit);
	return (lastDigit);
}
