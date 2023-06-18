#include <stdio.h>

/**
 *main - prints all the numbers of base 16 in lowercase
 *using putchar
 *Return: return 0 (code success)
 */

int main(void)
{
	int number = '0';
	int a_f = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	while (a_f <= 'f')
	{
		putchar(a_f);
		a_f++;
	}
	
	return (0);
}
