#include "main.h"

/**
 * _islower - checks for lowercase character
 * @cha: the character to be checked
 *
 * Return: returns 1 if cha its a character
 */
int _islower(int cha)
{
	if (cha >= 'a' && cha <= 'z')
		return (1);
	else
		return (0);
}
