#include <stdio.h>

/**
 *main - prints all the numbers of base 16 in lowercase
 *using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int number = '0';
	int a_f = 'a';

	while (number <= '9') /*print numbers between 0 and 9*/
	{
		putchar(number);
		number++;
	}

	while (a_f <= 'f') /*print a-f*/
	{
		putchar(a_f);
		a_f++;
	}

	putchar('\n');

	return (0);
}
