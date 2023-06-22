#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @cha: the character variable to be checked
 *
 * Return: 0 (code success)
 */
int _isalpha(int cha)
{
	if ((cha >= 'a' && cha <= 'z') || (cha >= 'A' && cha <= 'Z'))
		return (1);
	else
		return (0);
}
