#include <stdio.h>

/**
 *main - Print all the letters except q and e
 *Return: return 0 (code success)
 */

int main(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
		if ((letter == 'e') || (letter == 'q'))
		{
		    
		}
		else
		{
		    putchar(letter);
		}
		letter += 1;
	}
	putchar('\n');
	
	return (0);
}
