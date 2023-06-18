#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, and then in uppercase using putchar
 *Return: returns 0, if code has no errors (Success)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	
	while (lowercase <= 'z') /*print lowercase a-z*/
	{
		putchar(lowercase);
		lowercase++;
	}
	
	while (uppercase <= 'Z') /*print uppercase A-Z*/
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
