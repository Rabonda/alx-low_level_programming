#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, and then in uppercase using putchar
 *Return: returns 0, if code has no errors (Success)
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';
	
	/*print lowercase a-z*/
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	
	/*print uppercase A-Z*/
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
