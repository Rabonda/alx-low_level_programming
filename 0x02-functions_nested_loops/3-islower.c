#include "main.h"

/**
 * _islower - checks for lowercase character
 * @cha: the character to be checked
 *
 * Return: 1 if character is lowercase, else 0
 */
int _islower(int cha)
{
	if (cha >= 'a' && cha <= 'z')
		return (1);
	else
		return (0);
}
